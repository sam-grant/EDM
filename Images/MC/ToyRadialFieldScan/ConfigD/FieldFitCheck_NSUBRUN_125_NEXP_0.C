void FieldFitCheck_NSUBRUN_125_NEXP_0()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Oct 20 14:19:20 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-45,-38.12572,45,52.9288);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1059[4] = {
   -30,
   -10,
   10,
   30};
   Double_t Graph0_fy1059[4] = {
   -22.22688,
   -1.200777,
   17.06128,
   37.02996};
   Double_t Graph0_fex1059[4] = {
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1059[4] = {
   0.7230883,
   0.7230883,
   0.7230883,
   0.7230883};
   TGraphErrors *gre = new TGraphErrors(4,Graph0_fx1059,Graph0_fy1059,Graph0_fex1059,Graph0_fey1059);
   gre->SetName("Graph0");
   gre->SetTitle("Sub-runs 125");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01059 = new TH1F("Graph_Graph01059","Sub-runs 125",100,-36,36);
   Graph_Graph01059->SetMinimum(-29.02027);
   Graph_Graph01059->SetMaximum(43.82335);
   Graph_Graph01059->SetDirectory(0);
   Graph_Graph01059->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01059->SetLineColor(ci);
   Graph_Graph01059->GetXaxis()->SetTitle("Applied B_{r} [ppm]");
   Graph_Graph01059->GetXaxis()->CenterTitle(true);
   Graph_Graph01059->GetXaxis()->SetLabelFont(42);
   Graph_Graph01059->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01059->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01059->GetXaxis()->SetTitleFont(42);
   Graph_Graph01059->GetYaxis()->SetTitle("Calculated B_{r} [ppm]");
   Graph_Graph01059->GetYaxis()->CenterTitle(true);
   Graph_Graph01059->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01059->GetYaxis()->SetLabelFont(42);
   Graph_Graph01059->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01059->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01059->GetYaxis()->SetTitleFont(42);
   Graph_Graph01059->GetZaxis()->SetLabelFont(42);
   Graph_Graph01059->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01059->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01059);
   
   
   TF1 *checkFit1060 = new TF1("checkFit","[0]+[1]*x",-36,36, TF1::EAddToList::kNo);
   checkFit1060->SetFillColor(19);
   checkFit1060->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   checkFit1060->SetLineColor(ci);
   checkFit1060->SetLineWidth(2);
   checkFit1060->SetChisquare(2.445938);
   checkFit1060->SetNDF(2);
   checkFit1060->GetXaxis()->SetLabelFont(42);
   checkFit1060->GetXaxis()->SetTitleOffset(1);
   checkFit1060->GetXaxis()->SetTitleFont(42);
   checkFit1060->GetYaxis()->SetLabelFont(42);
   checkFit1060->GetYaxis()->SetTitleFont(42);
   checkFit1060->SetParameter(0,7.665896);
   checkFit1060->SetParError(0,0.3615442);
   checkFit1060->SetParLimits(0,0,0);
   checkFit1060->SetParameter(1,0.9801628);
   checkFit1060->SetParError(1,0.01616874);
   checkFit1060->SetParLimits(1,0,0);
   checkFit1060->SetParent(gre);
   gre->GetListOfFunctions()->Add(checkFit1060);
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.69,0.68,0.89,0.89,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(33);
   pt->SetTextFont(44);
   pt->SetTextSize(26);
   TText *pt_LaTex = pt->AddText(" 1.22");
   pt_LaTex = pt->AddText(" 0.98#pm0.0162");
   pt_LaTex = pt->AddText(" 7.67#pm0.362");
   pt_LaTex = pt->AddText("#minus7.82#pm0.391");
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
   TLine *line = new TLine(-36,0,-7.821044,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(-7.821044,-29.02027,-7.821044,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   
   TF1 *checkFit1061 = new TF1("checkFit","[0]+[1]*x",-36,36, TF1::EAddToList::kNo);
   checkFit1061->SetFillColor(19);
   checkFit1061->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   checkFit1061->SetLineColor(ci);
   checkFit1061->SetLineWidth(2);
   checkFit1061->SetChisquare(2.445938);
   checkFit1061->SetNDF(2);
   checkFit1061->GetXaxis()->SetLabelFont(42);
   checkFit1061->GetXaxis()->SetTitleOffset(1);
   checkFit1061->GetXaxis()->SetTitleFont(42);
   checkFit1061->GetYaxis()->SetLabelFont(42);
   checkFit1061->GetYaxis()->SetTitleFont(42);
   checkFit1061->SetParameter(0,7.665896);
   checkFit1061->SetParError(0,0.3615442);
   checkFit1061->SetParLimits(0,0,0);
   checkFit1061->SetParameter(1,0.9801628);
   checkFit1061->SetParError(1,0.01616874);
   checkFit1061->SetParLimits(1,0,0);
   checkFit1061->Draw("same");
   
   pt = new TPaveText(0.3750503,0.94,0.6249497,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   pt_LaTex = pt->AddText("Sub-runs 125");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
