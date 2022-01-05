void FieldFitCheck_NSUBRUN_264_NEXP_0()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Jan  5 17:36:10 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-45,-37.90483,45,55.04507);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1031[2] = {
   30,
   -30};
   Double_t Graph0_fy1031[2] = {
   38.8814,
   -21.74116};
   Double_t Graph0_fex1031[2] = {
   0,
   0};
   Double_t Graph0_fey1031[2] = {
   0.6720222,
   0.6720222};
   TGraphErrors *gre = new TGraphErrors(2,Graph0_fx1031,Graph0_fy1031,Graph0_fex1031,Graph0_fey1031);
   gre->SetName("Graph0");
   gre->SetTitle(";Applied #LTB_{r}#GT [ppm];#LTy#GT#upointV [mm#upointkV]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01031 = new TH1F("Graph_Graph01031","",100,-36,36);
   Graph_Graph01031->SetMinimum(-28.60984);
   Graph_Graph01031->SetMaximum(45.75008);
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
   Graph_Graph01031->GetYaxis()->SetTitle("#LTy#GT#upointV [mm#upointkV]");
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
   
   
   TF1 *checkFit1032 = new TF1("checkFit","[0]+[1]*x",-30,30, TF1::EAddToList::kNo);
   checkFit1032->SetFillColor(19);
   checkFit1032->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   checkFit1032->SetLineColor(ci);
   checkFit1032->SetLineWidth(2);
   checkFit1032->SetChisquare(3.528196e-16);
   checkFit1032->SetNDF(0);
   checkFit1032->GetXaxis()->SetLabelFont(42);
   checkFit1032->GetXaxis()->SetTitleOffset(1);
   checkFit1032->GetXaxis()->SetTitleFont(42);
   checkFit1032->GetYaxis()->SetLabelFont(42);
   checkFit1032->GetYaxis()->SetTitleFont(42);
   checkFit1032->SetParameter(0,8.570122);
   checkFit1032->SetParError(0,0.4751914);
   checkFit1032->SetParLimits(0,0,0);
   checkFit1032->SetParameter(1,1.010376);
   checkFit1032->SetParError(1,0.01583971);
   checkFit1032->SetParLimits(1,0,0);
   checkFit1032->SetParent(gre);
   gre->GetListOfFunctions()->Add(checkFit1032);
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.5,0.68,0.6,0.89,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(33);
   pt->SetTextFont(44);
   pt->SetTextSize(26);
   TText *pt_LaTex = pt->AddText("1.01
#pm0.0158
");
   pt_LaTex = pt->AddText("8.57
#pm0.475
");
   pt_LaTex = pt->AddText("8.48
#pm0.489
");
   pt->Draw();
   
   pt = new TPaveText(0.11,0.68,0.33,0.89,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(13);
   pt->SetTextFont(44);
   pt->SetTextSize(26);
   pt_LaTex = pt->AddText("Gradient");
   pt_LaTex = pt->AddText("Y-intercept [mm#upointkV]");
   pt_LaTex = pt->AddText("Background #LTB_{r}#GT [ppm]");
   pt->Draw();
   TLine *line = new TLine(-36,0,-8.482112,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(-8.482112,-28.60984,-8.482112,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   
   TF1 *checkFit1033 = new TF1("checkFit","[0]+[1]*x",-30,30, TF1::EAddToList::kNo);
   checkFit1033->SetFillColor(19);
   checkFit1033->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   checkFit1033->SetLineColor(ci);
   checkFit1033->SetLineWidth(2);
   checkFit1033->SetChisquare(3.528196e-16);
   checkFit1033->SetNDF(0);
   checkFit1033->GetXaxis()->SetLabelFont(42);
   checkFit1033->GetXaxis()->SetTitleOffset(1);
   checkFit1033->GetXaxis()->SetTitleFont(42);
   checkFit1033->GetYaxis()->SetLabelFont(42);
   checkFit1033->GetYaxis()->SetTitleFont(42);
   checkFit1033->SetParameter(0,8.570122);
   checkFit1033->SetParError(0,0.4751914);
   checkFit1033->SetParLimits(0,0,0);
   checkFit1033->SetParameter(1,1.010376);
   checkFit1033->SetParError(1,0.01583971);
   checkFit1033->SetParLimits(1,0,0);
   checkFit1033->Draw("same");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
