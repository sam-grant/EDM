void FieldFit_NSUBRUN_50_NEXP_0()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Dec  2 23:07:54 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-45,-44.83435,45,65.99249);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1021[4] = {
   -30,
   -10,
   10,
   30};
   Double_t Graph0_fy1021[4] = {
   -24.50174,
   -3.294082,
   23.61203,
   45.65993};
   Double_t Graph0_fex1021[4] = {
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1021[4] = {
   1.861471,
   1.86143,
   1.861423,
   1.861417};
   TGraphErrors *gre = new TGraphErrors(4,Graph0_fx1021,Graph0_fy1021,Graph0_fex1021,Graph0_fey1021);
   gre->SetName("Graph0");
   gre->SetTitle("50 sub-runs");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01021 = new TH1F("Graph_Graph01021","50 sub-runs",100,-36,36);
   Graph_Graph01021->SetMinimum(-33.75167);
   Graph_Graph01021->SetMaximum(54.90981);
   Graph_Graph01021->SetDirectory(0);
   Graph_Graph01021->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01021->SetLineColor(ci);
   Graph_Graph01021->GetXaxis()->SetTitle("#LTB_{r}^{App}#GT [ppm]");
   Graph_Graph01021->GetXaxis()->CenterTitle(true);
   Graph_Graph01021->GetXaxis()->SetLabelFont(42);
   Graph_Graph01021->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01021->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01021->GetXaxis()->SetTitleFont(42);
   Graph_Graph01021->GetYaxis()->SetTitle("#LTy#GT QHV [mm#upointkV]");
   Graph_Graph01021->GetYaxis()->CenterTitle(true);
   Graph_Graph01021->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01021->GetYaxis()->SetLabelFont(42);
   Graph_Graph01021->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01021->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01021->GetYaxis()->SetTitleFont(42);
   Graph_Graph01021->GetZaxis()->SetLabelFont(42);
   Graph_Graph01021->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01021->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01021);
   
   
   TF1 *mainFit1022 = new TF1("mainFit","[0]+[1]*x",-36,36, TF1::EAddToList::kNo);
   mainFit1022->SetFillColor(19);
   mainFit1022->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   mainFit1022->SetLineColor(ci);
   mainFit1022->SetLineWidth(2);
   mainFit1022->SetChisquare(1.6591);
   mainFit1022->SetNDF(2);
   mainFit1022->GetXaxis()->SetLabelFont(42);
   mainFit1022->GetXaxis()->SetTitleOffset(1);
   mainFit1022->GetXaxis()->SetTitleFont(42);
   mainFit1022->GetYaxis()->SetLabelFont(42);
   mainFit1022->GetYaxis()->SetTitleFont(42);
   mainFit1022->SetParameter(0,10.36903);
   mainFit1022->SetParError(0,0.9307177);
   mainFit1022->SetParLimits(0,0,0);
   mainFit1022->SetParameter(1,1.186956);
   mainFit1022->SetParError(1,0.04162312);
   mainFit1022->SetParLimits(1,0,0);
   mainFit1022->SetParent(gre);
   gre->GetListOfFunctions()->Add(mainFit1022);
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.5,0.68,0.6,0.89,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(33);
   pt->SetTextFont(44);
   pt->SetTextSize(26);
   TText *pt_LaTex = pt->AddText(" 0.83");
   pt_LaTex = pt->AddText(" 1.19#pm0.0416");
   pt_LaTex = pt->AddText(" 10.4#pm0.931");
   pt_LaTex = pt->AddText(" 8.74#pm0.842");
   pt->Draw();
   
   pt = new TPaveText(0.11,0.68,0.33,0.89,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(13);
   pt->SetTextFont(44);
   pt->SetTextSize(26);
   pt_LaTex = pt->AddText("#chi^{2}/ndf");
   pt_LaTex = pt->AddText("Gradient");
   pt_LaTex = pt->AddText("Y-intercept [mm/kV]");
   pt_LaTex = pt->AddText("#LTB_{r}^{Bkg}#GT [ppm]");
   pt->Draw();
   TLine *line = new TLine(-36,0,-8.735815,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(-8.735815,-33.75167,-8.735815,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   
   TF1 *mainFit1023 = new TF1("mainFit","[0]+[1]*x",-36,36, TF1::EAddToList::kNo);
   mainFit1023->SetFillColor(19);
   mainFit1023->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   mainFit1023->SetLineColor(ci);
   mainFit1023->SetLineWidth(2);
   mainFit1023->SetChisquare(1.6591);
   mainFit1023->SetNDF(2);
   mainFit1023->GetXaxis()->SetLabelFont(42);
   mainFit1023->GetXaxis()->SetTitleOffset(1);
   mainFit1023->GetXaxis()->SetTitleFont(42);
   mainFit1023->GetYaxis()->SetLabelFont(42);
   mainFit1023->GetYaxis()->SetTitleFont(42);
   mainFit1023->SetParameter(0,10.36903);
   mainFit1023->SetParError(0,0.9307177);
   mainFit1023->SetParLimits(0,0,0);
   mainFit1023->SetParameter(1,1.186956);
   mainFit1023->SetParError(1,0.04162312);
   mainFit1023->SetParLimits(1,0,0);
   mainFit1023->Draw("same");
   
   pt = new TPaveText(0.3869849,0.94,0.6130151,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   pt_LaTex = pt->AddText("50 sub-runs");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
