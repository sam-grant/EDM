void FieldFit_pValCheck3()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Apr 23 18:57:09 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-75,-63.08215,75,61.27883);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1031[5] = {
   50,
   30,
   10,
   -30,
   -50};
   Double_t Graph0_fy1031[5] = {
   39.10119,
   21.38361,
   7.803627,
   -22.80291,
   -39.79592};
   Double_t Graph0_fex1031[5] = {
   0,
   0,
   0,
   6.95313e-310,
   2.124054e-314};
   Double_t Graph0_fey1031[5] = {
   1.450807,
   1.196341,
   1.383718,
   1.2263,
   2.559399};
   TGraphErrors *gre = new TGraphErrors(5,Graph0_fx1031,Graph0_fy1031,Graph0_fex1031,Graph0_fey1031);
   gre->SetName("Graph0");
   gre->SetTitle(";#LTB_{r}^{App}#GT [ppm];#LTy#GT#upointQHV [mm#upointkV]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01031 = new TH1F("Graph_Graph01031","",100,-60,60);
   Graph_Graph01031->SetMinimum(-50.64605);
   Graph_Graph01031->SetMaximum(48.84273);
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
   Graph_Graph01031->GetYaxis()->SetTitle("#LTy#GT#upointQHV [mm#upointkV]");
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
   
   
   TF1 *mainFit1032 = new TF1("mainFit","[0]+[1]*x",-60,60, TF1::EAddToList::kNo);
   mainFit1032->SetFillColor(19);
   mainFit1032->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   mainFit1032->SetLineColor(ci);
   mainFit1032->SetLineWidth(2);
   mainFit1032->SetChisquare(2.222323);
   mainFit1032->SetNDF(3);
   mainFit1032->GetXaxis()->SetLabelFont(42);
   mainFit1032->GetXaxis()->SetTitleOffset(1);
   mainFit1032->GetXaxis()->SetTitleFont(42);
   mainFit1032->GetYaxis()->SetLabelFont(42);
   mainFit1032->GetYaxis()->SetTitleFont(42);
   mainFit1032->SetParameter(0,-0.3100045);
   mainFit1032->SetParError(0,0.6539613);
   mainFit1032->SetParLimits(0,0,0);
   mainFit1032->SetParameter(1,0.7663989);
   mainFit1032->SetParError(1,0.01942537);
   mainFit1032->SetParLimits(1,0,0);
   mainFit1032->SetParent(gre);
   gre->GetListOfFunctions()->Add(mainFit1032);
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.5,0.68,0.6,0.89,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(33);
   pt->SetTextFont(44);
   pt->SetTextSize(26);
   TText *pt_LaTex = pt->AddText("0.741");
   pt_LaTex = pt->AddText("0.766#pm0.0194");
   pt_LaTex = pt->AddText("#minus0.31#pm0.654");
   pt_LaTex = pt->AddText("#minus0.404#pm0.851");
   pt->Draw();
   
   pt = new TPaveText(0.11,0.68,0.33,0.89,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(13);
   pt->SetTextFont(44);
   pt->SetTextSize(26);
   pt_LaTex = pt->AddText("#chi^{2}/ndf");
   pt_LaTex = pt->AddText("Gradient");
   pt_LaTex = pt->AddText("Y-intercept [mm#upointkV]");
   pt_LaTex = pt->AddText("#LTB_{r}^{Bkg}#GT [ppm]");
   pt->Draw();
   TLine *line = new TLine(-60,0,0.4044949,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(0.4044949,-50.64605,0.4044949,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   
   TF1 *mainFit1033 = new TF1("mainFit","[0]+[1]*x",-60,60, TF1::EAddToList::kNo);
   mainFit1033->SetFillColor(19);
   mainFit1033->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   mainFit1033->SetLineColor(ci);
   mainFit1033->SetLineWidth(2);
   mainFit1033->SetChisquare(2.222323);
   mainFit1033->SetNDF(3);
   mainFit1033->GetXaxis()->SetLabelFont(42);
   mainFit1033->GetXaxis()->SetTitleOffset(1);
   mainFit1033->GetXaxis()->SetTitleFont(42);
   mainFit1033->GetYaxis()->SetLabelFont(42);
   mainFit1033->GetYaxis()->SetTitleFont(42);
   mainFit1033->SetParameter(0,-0.3100045);
   mainFit1033->SetParError(0,0.6539613);
   mainFit1033->SetParLimits(0,0,0);
   mainFit1033->SetParameter(1,0.7663989);
   mainFit1033->SetParError(1,0.01942537);
   mainFit1033->SetParLimits(1,0,0);
   mainFit1033->Draw("same");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
