void FieldFitCheck_NSUBRUN_50_NEXP_10()
{
//=========Macro generated from canvas: c/c
//=========  (Thu May  5 13:00:13 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-75,-106.7656,75,396.8439);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1031[6] = {
   -50,
   -30,
   -10,
   10,
   30,
   50};
   Double_t Graph0_fy1031[6] = {
   311.6888,
   -21.61048,
   -2.50022,
   17.51325,
   38.61396,
   57.14408};
   Double_t Graph0_fex1031[6] = {
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1031[6] = {
   1.220155,
   1.220155,
   1.220155,
   1.220155,
   1.220155,
   1.220155};
   TGraphErrors *gre = new TGraphErrors(6,Graph0_fx1031,Graph0_fy1031,Graph0_fex1031,Graph0_fey1031);
   gre->SetName("Graph0");
   gre->SetTitle(";Applied #LTB_{r}#GT [ppm];#Delta#LTy#GT#upoint#DeltaV [mm#upointkV]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01031 = new TH1F("Graph_Graph01031","",100,-60,60);
   Graph_Graph01031->SetMinimum(-56.4046);
   Graph_Graph01031->SetMaximum(346.483);
   Graph_Graph01031->SetDirectory(0);
   Graph_Graph01031->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01031->SetLineColor(ci);
   Graph_Graph01031->GetXaxis()->SetTitle("Applied #LTB_{r}#GT [ppm]");
   Graph_Graph01031->GetXaxis()->CenterTitle(true);
   Graph_Graph01031->GetXaxis()->SetLabelFont(42);
   Graph_Graph01031->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01031->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01031->GetXaxis()->SetTitleFont(42);
   Graph_Graph01031->GetYaxis()->SetTitle("#Delta#LTy#GT#upoint#DeltaV [mm#upointkV]");
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
   
   
   TF1 *checkFit1032 = new TF1("checkFit","[0]+[1]*x",-50,50, TF1::EAddToList::kNo);
   checkFit1032->SetFillColor(19);
   checkFit1032->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   checkFit1032->SetLineColor(ci);
   checkFit1032->SetLineWidth(2);
   checkFit1032->SetChisquare(39957.83);
   checkFit1032->SetNDF(4);
   checkFit1032->GetXaxis()->SetLabelFont(42);
   checkFit1032->GetXaxis()->SetTitleOffset(1);
   checkFit1032->GetXaxis()->SetTitleFont(42);
   checkFit1032->GetYaxis()->SetLabelFont(42);
   checkFit1032->GetYaxis()->SetTitleFont(42);
   checkFit1032->SetParameter(0,66.80824);
   checkFit1032->SetParError(0,0.498126);
   checkFit1032->SetParLimits(0,0,0);
   checkFit1032->SetParameter(1,-1.531481);
   checkFit1032->SetParError(1,0.01458364);
   checkFit1032->SetParLimits(1,0,0);
   checkFit1032->SetParent(gre);
   gre->GetListOfFunctions()->Add(checkFit1032);
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.5,0.68,0.6,0.89,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(33);
   pt->SetTextFont(44);
   pt->SetTextSize(26);
   TText *pt_LaTex = pt->AddText("9.99e+03");
   pt_LaTex = pt->AddText("-1.53
#pm0.01
");
   pt_LaTex = pt->AddText("66.8
#pm0.5
");
   pt_LaTex = pt->AddText("-44
#pm0.5
");
   pt->Draw();
   
   pt = new TPaveText(0.11,0.68,0.33,0.89,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(13);
   pt->SetTextFont(44);
   pt->SetTextSize(26);
   pt_LaTex = pt->AddText("#chi^{2}/ndf");
   pt_LaTex = pt->AddText("Gradient");
   pt_LaTex = pt->AddText("Y-intercept [mm#upointkV]");
   pt_LaTex = pt->AddText("Background #LTB_{r}#GT [ppm]");
   pt->Draw();
   TLine *line = new TLine(-60,0,43.62328,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(43.62328,-56.4046,43.62328,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   
   TF1 *checkFit1033 = new TF1("checkFit","[0]+[1]*x",-50,50, TF1::EAddToList::kNo);
   checkFit1033->SetFillColor(19);
   checkFit1033->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   checkFit1033->SetLineColor(ci);
   checkFit1033->SetLineWidth(2);
   checkFit1033->SetChisquare(39957.83);
   checkFit1033->SetNDF(4);
   checkFit1033->GetXaxis()->SetLabelFont(42);
   checkFit1033->GetXaxis()->SetTitleOffset(1);
   checkFit1033->GetXaxis()->SetTitleFont(42);
   checkFit1033->GetYaxis()->SetLabelFont(42);
   checkFit1033->GetYaxis()->SetTitleFont(42);
   checkFit1033->SetParameter(0,66.80824);
   checkFit1033->SetParError(0,0.498126);
   checkFit1033->SetParLimits(0,0,0);
   checkFit1033->SetParameter(1,-1.531481);
   checkFit1033->SetParError(1,0.01458364);
   checkFit1033->SetParLimits(1,0,0);
   checkFit1033->Draw("same");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
