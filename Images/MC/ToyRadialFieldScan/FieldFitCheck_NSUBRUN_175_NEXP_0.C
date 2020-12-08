void FieldFitCheck_NSUBRUN_175_NEXP_0()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Dec  2 23:08:02 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-45,-38.59688,45,54.13325);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1083[4] = {
   -30,
   -10,
   10,
   30};
   Double_t Graph0_fy1083[4] = {
   -22.31502,
   -2.023427,
   17.19536,
   37.85138};
   Double_t Graph0_fex1083[4] = {
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1083[4] = {
   0.8268391,
   0.8268391,
   0.8268391,
   0.8268391};
   TGraphErrors *gre = new TGraphErrors(4,Graph0_fx1083,Graph0_fy1083,Graph0_fex1083,Graph0_fey1083);
   gre->SetName("Graph0");
   gre->SetTitle("175 sub-runs");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01083 = new TH1F("Graph_Graph01083","175 sub-runs",100,-36,36);
   Graph_Graph01083->SetMinimum(-29.32387);
   Graph_Graph01083->SetMaximum(44.86023);
   Graph_Graph01083->SetDirectory(0);
   Graph_Graph01083->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01083->SetLineColor(ci);
   Graph_Graph01083->GetXaxis()->SetTitle("#LTB_{r}^{App}#GT [ppm]");
   Graph_Graph01083->GetXaxis()->CenterTitle(true);
   Graph_Graph01083->GetXaxis()->SetLabelFont(42);
   Graph_Graph01083->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01083->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01083->GetXaxis()->SetTitleFont(42);
   Graph_Graph01083->GetYaxis()->SetTitle("Calculated B_{r} [ppm]");
   Graph_Graph01083->GetYaxis()->CenterTitle(true);
   Graph_Graph01083->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01083->GetYaxis()->SetLabelFont(42);
   Graph_Graph01083->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01083->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01083->GetYaxis()->SetTitleFont(42);
   Graph_Graph01083->GetZaxis()->SetLabelFont(42);
   Graph_Graph01083->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01083->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01083);
   
   
   TF1 *checkFit1084 = new TF1("checkFit","[0]+[1]*x",-36,36, TF1::EAddToList::kNo);
   checkFit1084->SetFillColor(19);
   checkFit1084->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   checkFit1084->SetLineColor(ci);
   checkFit1084->SetLineWidth(2);
   checkFit1084->SetChisquare(0.5093434);
   checkFit1084->SetNDF(2);
   checkFit1084->GetXaxis()->SetLabelFont(42);
   checkFit1084->GetXaxis()->SetTitleOffset(1);
   checkFit1084->GetXaxis()->SetTitleFont(42);
   checkFit1084->GetYaxis()->SetLabelFont(42);
   checkFit1084->GetYaxis()->SetTitleFont(42);
   checkFit1084->SetParameter(0,7.677075);
   checkFit1084->SetParError(0,0.4134196);
   checkFit1084->SetParLimits(0,0,0);
   checkFit1084->SetParameter(1,0.99859);
   checkFit1084->SetParError(1,0.01848869);
   checkFit1084->SetParLimits(1,0,0);
   checkFit1084->SetParent(gre);
   gre->GetListOfFunctions()->Add(checkFit1084);
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.5,0.68,0.6,0.89,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(33);
   pt->SetTextFont(44);
   pt->SetTextSize(26);
   TText *pt_LaTex = pt->AddText("0.255");
   pt_LaTex = pt->AddText("0.999#pm0.0185");
   pt_LaTex = pt->AddText(" 7.68#pm0.413");
   pt_LaTex = pt->AddText(" 7.69#pm0.438");
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
   TLine *line = new TLine(-36,0,-7.687915,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(-7.687915,-29.32387,-7.687915,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   
   TF1 *checkFit1085 = new TF1("checkFit","[0]+[1]*x",-36,36, TF1::EAddToList::kNo);
   checkFit1085->SetFillColor(19);
   checkFit1085->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   checkFit1085->SetLineColor(ci);
   checkFit1085->SetLineWidth(2);
   checkFit1085->SetChisquare(0.5093434);
   checkFit1085->SetNDF(2);
   checkFit1085->GetXaxis()->SetLabelFont(42);
   checkFit1085->GetXaxis()->SetTitleOffset(1);
   checkFit1085->GetXaxis()->SetTitleFont(42);
   checkFit1085->GetYaxis()->SetLabelFont(42);
   checkFit1085->GetYaxis()->SetTitleFont(42);
   checkFit1085->SetParameter(0,7.677075);
   checkFit1085->SetParError(0,0.4134196);
   checkFit1085->SetParLimits(0,0,0);
   checkFit1085->SetParameter(1,0.99859);
   checkFit1085->SetParError(1,0.01848869);
   checkFit1085->SetParLimits(1,0,0);
   checkFit1085->Draw("same");
   
   pt = new TPaveText(0.3769347,0.94,0.6230653,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   pt_LaTex = pt->AddText("175 sub-runs");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
