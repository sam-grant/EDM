void FieldFitCheck_NSUBRUN_100_NEXP_0()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Dec  8 12:25:42 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-45,-36.95261,45,54.81551);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1031[2] = {
   -30,
   30};
   Double_t Graph0_fy1031[2] = {
   -20.55999,
   38.42289};
   Double_t Graph0_fex1031[2] = {
   0,
   0};
   Double_t Graph0_fey1031[2] = {
   1.097935,
   1.097935};
   TGraphErrors *gre = new TGraphErrors(2,Graph0_fx1031,Graph0_fy1031,Graph0_fex1031,Graph0_fey1031);
   gre->SetName("Graph0");
   gre->SetTitle("100 sub-runs");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01031 = new TH1F("Graph_Graph01031","100 sub-runs",100,-36,36);
   Graph_Graph01031->SetMinimum(-27.7758);
   Graph_Graph01031->SetMaximum(45.6387);
   Graph_Graph01031->SetDirectory(0);
   Graph_Graph01031->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01031->SetLineColor(ci);
   Graph_Graph01031->GetXaxis()->SetTitle("#LTB_{r}^{App}#GT [ppm]");
   Graph_Graph01031->GetXaxis()->CenterTitle(true);
   Graph_Graph01031->GetXaxis()->SetLabelFont(42);
   Graph_Graph01031->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01031->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01031->GetXaxis()->SetTitleFont(42);
   Graph_Graph01031->GetYaxis()->SetTitle("Calculated B_{r} [ppm]");
   Graph_Graph01031->GetYaxis()->CenterTitle(true);
   Graph_Graph01031->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01031->GetYaxis()->SetLabelFont(42);
   Graph_Graph01031->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01031->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01031->GetYaxis()->SetTitleFont(42);
   Graph_Graph01031->GetZaxis()->SetLabelFont(42);
   Graph_Graph01031->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01031->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01031);
   
   
   TF1 *checkFit1032 = new TF1("checkFit","[0]+[1]*x",-36,36, TF1::EAddToList::kNo);
   checkFit1032->SetFillColor(19);
   checkFit1032->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   checkFit1032->SetLineColor(ci);
   checkFit1032->SetLineWidth(2);
   checkFit1032->SetChisquare(5.58373e-17);
   checkFit1032->SetNDF(0);
   checkFit1032->GetXaxis()->SetLabelFont(42);
   checkFit1032->GetXaxis()->SetTitleOffset(1);
   checkFit1032->GetXaxis()->SetTitleFont(42);
   checkFit1032->GetYaxis()->SetLabelFont(42);
   checkFit1032->GetYaxis()->SetTitleFont(42);
   checkFit1032->SetParameter(0,8.931452);
   checkFit1032->SetParError(0,0.776357);
   checkFit1032->SetParLimits(0,0,0);
   checkFit1032->SetParameter(1,0.983048);
   checkFit1032->SetParError(1,0.02587857);
   checkFit1032->SetParLimits(1,0,0);
   checkFit1032->SetParent(gre);
   gre->GetListOfFunctions()->Add(checkFit1032);
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.5,0.68,0.6,0.89,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(33);
   pt->SetTextFont(44);
   pt->SetTextSize(26);
   TText *pt_LaTex = pt->AddText("  inf");
   pt_LaTex = pt->AddText("0.983#pm0.0259");
   pt_LaTex = pt->AddText(" 8.93#pm0.776");
   pt_LaTex = pt->AddText(" 9.09#pm0.825");
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
   TLine *line = new TLine(-36,0,-9.085469,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(-9.085469,-27.7758,-9.085469,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   
   TF1 *checkFit1033 = new TF1("checkFit","[0]+[1]*x",-36,36, TF1::EAddToList::kNo);
   checkFit1033->SetFillColor(19);
   checkFit1033->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   checkFit1033->SetLineColor(ci);
   checkFit1033->SetLineWidth(2);
   checkFit1033->SetChisquare(5.58373e-17);
   checkFit1033->SetNDF(0);
   checkFit1033->GetXaxis()->SetLabelFont(42);
   checkFit1033->GetXaxis()->SetTitleOffset(1);
   checkFit1033->GetXaxis()->SetTitleFont(42);
   checkFit1033->GetYaxis()->SetLabelFont(42);
   checkFit1033->GetYaxis()->SetTitleFont(42);
   checkFit1033->SetParameter(0,8.931452);
   checkFit1033->SetParError(0,0.776357);
   checkFit1033->SetParLimits(0,0,0);
   checkFit1033->SetParameter(1,0.983048);
   checkFit1033->SetParError(1,0.02587857);
   checkFit1033->SetParLimits(1,0,0);
   checkFit1033->Draw("same");
   
   pt = new TPaveText(0.3769347,0.94,0.6230653,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   pt_LaTex = pt->AddText("100 sub-runs");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
