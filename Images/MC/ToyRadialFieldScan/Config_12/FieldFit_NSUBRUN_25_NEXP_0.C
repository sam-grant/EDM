void FieldFit_NSUBRUN_25_NEXP_0()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Oct 16 07:57:10 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-75,-0.3196006,75,0.2488445);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1011[5] = {
   -50,
   -25,
   0,
   25,
   50};
   Double_t Graph0_fy1011[5] = {
   0.1437708,
   0.06616137,
   -0.01731778,
   -0.125506,
   -0.2145272};
   Double_t Graph0_fex1011[5] = {
   0,
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1011[5] = {
   0.01033282,
   0.01033234,
   0.01033337,
   0.01033249,
   0.01033249};
   TGraphErrors *gre = new TGraphErrors(5,Graph0_fx1011,Graph0_fy1011,Graph0_fex1011,Graph0_fey1011);
   gre->SetName("Graph0");
   gre->SetTitle("Sub-runs 25");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01011 = new TH1F("Graph_Graph01011","Sub-runs 25",100,-60,60);
   Graph_Graph01011->SetMinimum(-0.262756);
   Graph_Graph01011->SetMaximum(0.192);
   Graph_Graph01011->SetDirectory(0);
   Graph_Graph01011->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01011->SetLineColor(ci);
   Graph_Graph01011->GetXaxis()->SetTitle("Applied B_{r} [ppm]");
   Graph_Graph01011->GetXaxis()->CenterTitle(true);
   Graph_Graph01011->GetXaxis()->SetLabelFont(42);
   Graph_Graph01011->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01011->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01011->GetXaxis()->SetTitleFont(42);
   Graph_Graph01011->GetYaxis()->SetTitle("#LTy#GT / QHV [mm/kV]");
   Graph_Graph01011->GetYaxis()->CenterTitle(true);
   Graph_Graph01011->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01011->GetYaxis()->SetLabelFont(42);
   Graph_Graph01011->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01011->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01011->GetYaxis()->SetTitleFont(42);
   Graph_Graph01011->GetZaxis()->SetLabelFont(42);
   Graph_Graph01011->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01011->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01011);
   
   
   TF1 *mainFit1012 = new TF1("mainFit","[0]+[1]*x",-60,60, TF1::EAddToList::kNo);
   mainFit1012->SetFillColor(19);
   mainFit1012->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   mainFit1012->SetLineColor(ci);
   mainFit1012->SetLineWidth(2);
   mainFit1012->SetChisquare(2.624806);
   mainFit1012->SetNDF(3);
   mainFit1012->GetXaxis()->SetLabelFont(42);
   mainFit1012->GetXaxis()->SetTitleOffset(1);
   mainFit1012->GetXaxis()->SetTitleFont(42);
   mainFit1012->GetYaxis()->SetLabelFont(42);
   mainFit1012->GetYaxis()->SetTitleFont(42);
   mainFit1012->SetParameter(0,-0.02948584);
   mainFit1012->SetParError(0,0.004620924);
   mainFit1012->SetParLimits(0,0,0);
   mainFit1012->SetParameter(1,-0.003633071);
   mainFit1012->SetParError(1,0.0001306983);
   mainFit1012->SetParLimits(1,0,0);
   mainFit1012->SetParent(gre);
   gre->GetListOfFunctions()->Add(mainFit1012);
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.69,0.68,0.89,0.89,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(33);
   pt->SetTextFont(44);
   pt->SetTextSize(26);
   TText *pt_LaTex = pt->AddText("0.875");
   pt_LaTex = pt->AddText("#minus0.00363#pm0.000131");
   pt_LaTex = pt->AddText("#minus0.0295#pm0.00462");
   pt_LaTex = pt->AddText("#minus8.12#pm  1.3");
   pt->Draw();
   
   pt = new TPaveText(0.3,0.69,0.62,0.88,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(13);
   pt->SetTextFont(44);
   pt->SetTextSize(26);
   pt_LaTex = pt->AddText("#chi^{2}/ndf");
   pt_LaTex = pt->AddText("Gradient [mm/kV#upointppm]");
   pt_LaTex = pt->AddText("Y-intercept [mm/kV]");
   pt_LaTex = pt->AddText("Background B_{r} [ppm]");
   pt->Draw();
   TLine *line = new TLine(-60,0,-8.115955,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(-8.115955,-0.262756,-8.115955,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   
   TF1 *mainFit1013 = new TF1("mainFit","[0]+[1]*x",-60,60, TF1::EAddToList::kNo);
   mainFit1013->SetFillColor(19);
   mainFit1013->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   mainFit1013->SetLineColor(ci);
   mainFit1013->SetLineWidth(2);
   mainFit1013->SetChisquare(2.624806);
   mainFit1013->SetNDF(3);
   mainFit1013->GetXaxis()->SetLabelFont(42);
   mainFit1013->GetXaxis()->SetTitleOffset(1);
   mainFit1013->GetXaxis()->SetTitleFont(42);
   mainFit1013->GetYaxis()->SetLabelFont(42);
   mainFit1013->GetYaxis()->SetTitleFont(42);
   mainFit1013->SetParameter(0,-0.02948584);
   mainFit1013->SetParError(0,0.004620924);
   mainFit1013->SetParLimits(0,0,0);
   mainFit1013->SetParameter(1,-0.003633071);
   mainFit1013->SetParError(1,0.0001306983);
   mainFit1013->SetParLimits(1,0,0);
   mainFit1013->Draw("same");
   
   pt = new TPaveText(0.3851005,0.94,0.6148995,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   pt_LaTex = pt->AddText("Sub-runs 25");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
