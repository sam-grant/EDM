void FieldFit_pValCheck1()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr 22 10:08:36 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-75,-58.91727,75,61.1113);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1027[5] = {
   50,
   10,
   -10,
   -30,
   -50};
   Double_t Graph0_fy1027[5] = {
   39.28956,
   8.677893,
   -6.869145,
   -22.84049,
   -35.70849};
   Double_t Graph0_fex1027[5] = {
   0,
   0,
   6.953123e-310,
   6.953123e-310,
   2.191087e-314};
   Double_t Graph0_fey1027[5] = {
   1.816981,
   1.732959,
   1.525879,
   1.53604,
   3.204023};
   TGraphErrors *gre = new TGraphErrors(5,Graph0_fx1027,Graph0_fy1027,Graph0_fex1027,Graph0_fey1027);
   gre->SetName("Graph0");
   gre->SetTitle(";#LTB_{r}^{App}#GT [ppm];#LTy#GT#upointQHV [mm#upointkV]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01027 = new TH1F("Graph_Graph01027","",100,-60,60);
   Graph_Graph01027->SetMinimum(-46.91441);
   Graph_Graph01027->SetMaximum(49.10844);
   Graph_Graph01027->SetDirectory(0);
   Graph_Graph01027->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01027->SetLineColor(ci);
   Graph_Graph01027->GetXaxis()->SetTitle("#LTB_{r}^{App}#GT [ppm]");
   Graph_Graph01027->GetXaxis()->CenterTitle(true);
   Graph_Graph01027->GetXaxis()->SetLabelFont(42);
   Graph_Graph01027->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01027->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01027->GetXaxis()->SetTitleFont(42);
   Graph_Graph01027->GetYaxis()->SetTitle("#LTy#GT#upointQHV [mm#upointkV]");
   Graph_Graph01027->GetYaxis()->CenterTitle(true);
   Graph_Graph01027->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01027->GetYaxis()->SetLabelFont(42);
   Graph_Graph01027->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01027->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01027->GetYaxis()->SetTitleFont(42);
   Graph_Graph01027->GetZaxis()->SetLabelFont(42);
   Graph_Graph01027->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01027->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01027);
   
   
   TF1 *mainFit1028 = new TF1("mainFit","[0]+[1]*x",-60,60, TF1::EAddToList::kNo);
   mainFit1028->SetFillColor(19);
   mainFit1028->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   mainFit1028->SetLineColor(ci);
   mainFit1028->SetLineWidth(2);
   mainFit1028->SetChisquare(0.5162557);
   mainFit1028->SetNDF(3);
   mainFit1028->GetXaxis()->SetLabelFont(42);
   mainFit1028->GetXaxis()->SetTitleOffset(1);
   mainFit1028->GetXaxis()->SetTitleFont(42);
   mainFit1028->GetYaxis()->SetLabelFont(42);
   mainFit1028->GetYaxis()->SetTitleFont(42);
   mainFit1028->SetParameter(0,0.8179545);
   mainFit1028->SetParError(0,0.7958917);
   mainFit1028->SetParLimits(0,0,0);
   mainFit1028->SetParameter(1,0.7683101);
   mainFit1028->SetParError(1,0.02625073);
   mainFit1028->SetParLimits(1,0,0);
   mainFit1028->SetParent(gre);
   gre->GetListOfFunctions()->Add(mainFit1028);
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.5,0.68,0.6,0.89,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(33);
   pt->SetTextFont(44);
   pt->SetTextSize(26);
   TText *pt_LaTex = pt->AddText("0.172");
   pt_LaTex = pt->AddText("0.768#pm0.0263");
   pt_LaTex = pt->AddText("0.818#pm0.796");
   pt_LaTex = pt->AddText(" 1.06#pm 1.03");
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
   TLine *line = new TLine(-60,0,-1.064615,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(-1.064615,-46.91441,-1.064615,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   
   TF1 *mainFit1029 = new TF1("mainFit","[0]+[1]*x",-60,60, TF1::EAddToList::kNo);
   mainFit1029->SetFillColor(19);
   mainFit1029->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   mainFit1029->SetLineColor(ci);
   mainFit1029->SetLineWidth(2);
   mainFit1029->SetChisquare(0.5162557);
   mainFit1029->SetNDF(3);
   mainFit1029->GetXaxis()->SetLabelFont(42);
   mainFit1029->GetXaxis()->SetTitleOffset(1);
   mainFit1029->GetXaxis()->SetTitleFont(42);
   mainFit1029->GetYaxis()->SetLabelFont(42);
   mainFit1029->GetYaxis()->SetTitleFont(42);
   mainFit1029->SetParameter(0,0.8179545);
   mainFit1029->SetParError(0,0.7958917);
   mainFit1029->SetParLimits(0,0,0);
   mainFit1029->SetParameter(1,0.7683101);
   mainFit1029->SetParError(1,0.02625073);
   mainFit1029->SetParLimits(1,0,0);
   mainFit1029->Draw("same");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
