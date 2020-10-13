void FieldFit_NSUBRUN_250_NEXP_0()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Oct 12 20:04:25 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-45,-0.1987151,45,0.142569);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1099[4] = {
   -30,
   -10,
   10,
   30};
   Double_t Graph0_fy1099[4] = {
   0.08239224,
   0.004456234,
   -0.07300816,
   -0.1385383};
   Double_t Graph0_fex1099[4] = {
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1099[4] = {
   0.003296099,
   0.003296099,
   0.003296099,
   0.003296099};
   TGraphErrors *gre = new TGraphErrors(4,Graph0_fx1099,Graph0_fy1099,Graph0_fex1099,Graph0_fey1099);
   gre->SetName("Graph0");
   gre->SetTitle("Sub-runs 250");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01099 = new TH1F("Graph_Graph01099","Sub-runs 250",100,-36,36);
   Graph_Graph01099->SetMinimum(-0.1645867);
   Graph_Graph01099->SetMaximum(0.1084406);
   Graph_Graph01099->SetDirectory(0);
   Graph_Graph01099->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01099->SetLineColor(ci);
   Graph_Graph01099->GetXaxis()->SetTitle("Applied B_{r} [ppm]");
   Graph_Graph01099->GetXaxis()->CenterTitle(true);
   Graph_Graph01099->GetXaxis()->SetLabelFont(42);
   Graph_Graph01099->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01099->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01099->GetXaxis()->SetTitleFont(42);
   Graph_Graph01099->GetYaxis()->SetTitle("#LTy#GT / QHV [mm/kV]");
   Graph_Graph01099->GetYaxis()->CenterTitle(true);
   Graph_Graph01099->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01099->GetYaxis()->SetLabelFont(42);
   Graph_Graph01099->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01099->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01099->GetYaxis()->SetTitleFont(42);
   Graph_Graph01099->GetZaxis()->SetLabelFont(42);
   Graph_Graph01099->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01099->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01099);
   
   
   TF1 *mainFit1100 = new TF1("mainFit","[0]+[1]*x",-36,36, TF1::EAddToList::kNo);
   mainFit1100->SetFillColor(19);
   mainFit1100->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   mainFit1100->SetLineColor(ci);
   mainFit1100->SetLineWidth(2);
   mainFit1100->SetChisquare(4.146233);
   mainFit1100->SetNDF(2);
   mainFit1100->GetXaxis()->SetLabelFont(42);
   mainFit1100->GetXaxis()->SetTitleOffset(1);
   mainFit1100->GetXaxis()->SetTitleFont(42);
   mainFit1100->GetYaxis()->SetLabelFont(42);
   mainFit1100->GetYaxis()->SetTitleFont(42);
   mainFit1100->SetParameter(0,-0.0311745);
   mainFit1100->SetParError(0,0.00164805);
   mainFit1100->SetParLimits(0,0,0);
   mainFit1100->SetParameter(1,-0.00370128);
   mainFit1100->SetParError(1,7.370302e-05);
   mainFit1100->SetParLimits(1,0,0);
   mainFit1100->SetParent(gre);
   gre->GetListOfFunctions()->Add(mainFit1100);
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.69,0.68,0.89,0.89,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(33);
   pt->SetTextFont(44);
   pt->SetTextSize(26);
   TText *pt_LaTex = pt->AddText(" 2.07");
   pt_LaTex = pt->AddText("#minus0.0037#pm7.37e-05");
   pt_LaTex = pt->AddText("#minus0.0312#pm0.00165");
   pt_LaTex = pt->AddText("#minus8.42#pm0.476");
   pt->Draw();
   
   pt = new TPaveText(0.3,0.69,0.62,0.88,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(13);
   pt->SetTextFont(44);
   pt->SetTextSize(26);
   pt_LaTex = pt->AddText("#chi^{2}/ndf");
   pt_LaTex = pt->AddText("Gradient [mm/kV#upointppm]");
   pt_LaTex = pt->AddText("Y-intercept [mm/kV]");
   pt_LaTex = pt->AddText("Residual B_{r} [ppm]");
   pt->Draw();
   TLine *line = new TLine(-36,0,-8.422626,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(-8.422626,-0.1645867,-8.422626,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   
   TF1 *mainFit1101 = new TF1("mainFit","[0]+[1]*x",-36,36, TF1::EAddToList::kNo);
   mainFit1101->SetFillColor(19);
   mainFit1101->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   mainFit1101->SetLineColor(ci);
   mainFit1101->SetLineWidth(2);
   mainFit1101->SetChisquare(4.146233);
   mainFit1101->SetNDF(2);
   mainFit1101->GetXaxis()->SetLabelFont(42);
   mainFit1101->GetXaxis()->SetTitleOffset(1);
   mainFit1101->GetXaxis()->SetTitleFont(42);
   mainFit1101->GetYaxis()->SetLabelFont(42);
   mainFit1101->GetYaxis()->SetTitleFont(42);
   mainFit1101->SetParameter(0,-0.0311745);
   mainFit1101->SetParError(0,0.00164805);
   mainFit1101->SetParLimits(0,0,0);
   mainFit1101->SetParameter(1,-0.00370128);
   mainFit1101->SetParError(1,7.370302e-05);
   mainFit1101->SetParLimits(1,0,0);
   mainFit1101->Draw("same");
   
   pt = new TPaveText(0.3750503,0.94,0.6249497,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   pt_LaTex = pt->AddText("Sub-runs 250");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
