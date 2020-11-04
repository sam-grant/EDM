void FieldFit_NSUBRUN_50_NEXP_0()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Oct 16 07:48:16 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-45,-0.2034956,45,0.1394118);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1013[2] = {
   -30,
   30};
   Double_t Graph0_fy1013[2] = {
   0.07492777,
   -0.1390116};
   Double_t Graph0_fex1013[2] = {
   0,
   0};
   Double_t Graph0_fey1013[2] = {
   0.007332801,
   0.007332801};
   TGraphErrors *gre = new TGraphErrors(2,Graph0_fx1013,Graph0_fy1013,Graph0_fex1013,Graph0_fey1013);
   gre->SetName("Graph0");
   gre->SetTitle("Sub-runs 50");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01013 = new TH1F("Graph_Graph01013","Sub-runs 50",100,-36,36);
   Graph_Graph01013->SetMinimum(-0.1692049);
   Graph_Graph01013->SetMaximum(0.1051211);
   Graph_Graph01013->SetDirectory(0);
   Graph_Graph01013->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01013->SetLineColor(ci);
   Graph_Graph01013->GetXaxis()->SetTitle("Applied B_{r} [ppm]");
   Graph_Graph01013->GetXaxis()->CenterTitle(true);
   Graph_Graph01013->GetXaxis()->SetLabelFont(42);
   Graph_Graph01013->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01013->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01013->GetXaxis()->SetTitleFont(42);
   Graph_Graph01013->GetYaxis()->SetTitle("#LTy#GT / QHV [mm/kV]");
   Graph_Graph01013->GetYaxis()->CenterTitle(true);
   Graph_Graph01013->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01013->GetYaxis()->SetLabelFont(42);
   Graph_Graph01013->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01013->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01013->GetYaxis()->SetTitleFont(42);
   Graph_Graph01013->GetZaxis()->SetLabelFont(42);
   Graph_Graph01013->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01013->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01013);
   
   
   TF1 *mainFit1014 = new TF1("mainFit","[0]+[1]*x",-36,36, TF1::EAddToList::kNo);
   mainFit1014->SetFillColor(19);
   mainFit1014->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   mainFit1014->SetLineColor(ci);
   mainFit1014->SetLineWidth(2);
   mainFit1014->SetChisquare(1.448667e-14);
   mainFit1014->SetNDF(0);
   mainFit1014->GetXaxis()->SetLabelFont(42);
   mainFit1014->GetXaxis()->SetTitleOffset(1);
   mainFit1014->GetXaxis()->SetTitleFont(42);
   mainFit1014->GetYaxis()->SetLabelFont(42);
   mainFit1014->GetYaxis()->SetTitleFont(42);
   mainFit1014->SetParameter(0,-0.0320419);
   mainFit1014->SetParError(0,0.005185073);
   mainFit1014->SetParLimits(0,0,0);
   mainFit1014->SetParameter(1,-0.003565656);
   mainFit1014->SetParError(1,0.0001728358);
   mainFit1014->SetParLimits(1,0,0);
   mainFit1014->SetParent(gre);
   gre->GetListOfFunctions()->Add(mainFit1014);
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.69,0.68,0.89,0.89,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(33);
   pt->SetTextFont(44);
   pt->SetTextSize(26);
   TText *pt_LaTex = pt->AddText("  inf");
   pt_LaTex = pt->AddText("#minus0.00357#pm0.000173");
   pt_LaTex = pt->AddText("#minus0.032#pm0.00519");
   pt_LaTex = pt->AddText("#minus8.99#pm 1.52");
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
   TLine *line = new TLine(-36,0,-8.986258,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(-8.986258,-0.1692049,-8.986258,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   
   TF1 *mainFit1015 = new TF1("mainFit","[0]+[1]*x",-36,36, TF1::EAddToList::kNo);
   mainFit1015->SetFillColor(19);
   mainFit1015->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   mainFit1015->SetLineColor(ci);
   mainFit1015->SetLineWidth(2);
   mainFit1015->SetChisquare(1.448667e-14);
   mainFit1015->SetNDF(0);
   mainFit1015->GetXaxis()->SetLabelFont(42);
   mainFit1015->GetXaxis()->SetTitleOffset(1);
   mainFit1015->GetXaxis()->SetTitleFont(42);
   mainFit1015->GetYaxis()->SetLabelFont(42);
   mainFit1015->GetYaxis()->SetTitleFont(42);
   mainFit1015->SetParameter(0,-0.0320419);
   mainFit1015->SetParError(0,0.005185073);
   mainFit1015->SetParLimits(0,0,0);
   mainFit1015->SetParameter(1,-0.003565656);
   mainFit1015->SetParError(1,0.0001728358);
   mainFit1015->SetParLimits(1,0,0);
   mainFit1015->Draw("same");
   
   pt = new TPaveText(0.3851005,0.94,0.6148995,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   pt_LaTex = pt->AddText("Sub-runs 50");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
