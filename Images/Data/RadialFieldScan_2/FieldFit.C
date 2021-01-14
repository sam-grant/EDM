void FieldFit()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Jan  7 21:43:38 2021) by ROOT version 6.22/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-75,-61.36538,75,60.9951);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1026[6] = {
   50,
   30,
   10,
   -10,
   -30,
   -50};
   Double_t Graph0_fy1026[6] = {
   39.1181,
   20.96023,
   9.013131,
   -6.128556,
   -23.37896,
   -38.35743};
   Double_t Graph0_fex1026[6] = {
   6.953123e-310,
   0,
   0,
   6.953123e-310,
   6.953123e-310,
   2.194952e-314};
   Double_t Graph0_fey1026[6] = {
   1.483591,
   1.222034,
   1.413793,
   1.245862,
   1.252617,
   2.614538};
   TGraphErrors *gre = new TGraphErrors(6,Graph0_fx1026,Graph0_fy1026,Graph0_fex1026,Graph0_fey1026);
   gre->SetName("Graph0");
   gre->SetTitle(";#LTB_{r}^{App}#GT [ppm];#LTy#GT#upointQHV [mm#upointkV]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01026 = new TH1F("Graph_Graph01026","",100,-60,60);
   Graph_Graph01026->SetMinimum(-49.12933);
   Graph_Graph01026->SetMaximum(48.75906);
   Graph_Graph01026->SetDirectory(0);
   Graph_Graph01026->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01026->SetLineColor(ci);
   Graph_Graph01026->GetXaxis()->SetTitle("#LTB_{r}^{App}#GT [ppm]");
   Graph_Graph01026->GetXaxis()->CenterTitle(true);
   Graph_Graph01026->GetXaxis()->SetLabelFont(42);
   Graph_Graph01026->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01026->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01026->GetXaxis()->SetTitleFont(42);
   Graph_Graph01026->GetYaxis()->SetTitle("#LTy#GT#upointQHV [mm#upointkV]");
   Graph_Graph01026->GetYaxis()->CenterTitle(true);
   Graph_Graph01026->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01026->GetYaxis()->SetLabelFont(42);
   Graph_Graph01026->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01026->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01026->GetYaxis()->SetTitleFont(42);
   Graph_Graph01026->GetZaxis()->SetLabelFont(42);
   Graph_Graph01026->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01026->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01026);
   
   
   TF1 *mainFit1027 = new TF1("mainFit","[0]+[1]*x",-60,60, TF1::EAddToList::kNo);
   mainFit1027->SetFillColor(19);
   mainFit1027->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   mainFit1027->SetLineColor(ci);
   mainFit1027->SetLineWidth(2);
   mainFit1027->SetChisquare(5.372834);
   mainFit1027->SetNDF(4);
   mainFit1027->GetXaxis()->SetLabelFont(42);
   mainFit1027->GetXaxis()->SetTitleOffset(1);
   mainFit1027->GetXaxis()->SetTitleFont(42);
   mainFit1027->GetYaxis()->SetLabelFont(42);
   mainFit1027->GetYaxis()->SetTitleFont(42);
   mainFit1027->SetParameter(0,0.1720065);
   mainFit1027->SetParError(0,0.5800357);
   mainFit1027->SetParLimits(0,0,0);
   mainFit1027->SetParameter(1,0.758978);
   mainFit1027->SetParError(1,0.01917689);
   mainFit1027->SetParLimits(1,0,0);
   mainFit1027->SetParent(gre);
   gre->GetListOfFunctions()->Add(mainFit1027);
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.5,0.68,0.6,0.89,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(33);
   pt->SetTextFont(44);
   pt->SetTextSize(26);
   TText *pt_LaTex = pt->AddText(" 1.34");
   pt_LaTex = pt->AddText("0.759#pm0.0192");
   pt_LaTex = pt->AddText("0.172#pm 0.58");
   pt_LaTex = pt->AddText("0.227#pm0.765");
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
   TLine *line = new TLine(-60,0,-0.2266291,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(-0.2266291,-49.12933,-0.2266291,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   
   TF1 *mainFit1028 = new TF1("mainFit","[0]+[1]*x",-60,60, TF1::EAddToList::kNo);
   mainFit1028->SetFillColor(19);
   mainFit1028->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   mainFit1028->SetLineColor(ci);
   mainFit1028->SetLineWidth(2);
   mainFit1028->SetChisquare(5.372834);
   mainFit1028->SetNDF(4);
   mainFit1028->GetXaxis()->SetLabelFont(42);
   mainFit1028->GetXaxis()->SetTitleOffset(1);
   mainFit1028->GetXaxis()->SetTitleFont(42);
   mainFit1028->GetYaxis()->SetLabelFont(42);
   mainFit1028->GetYaxis()->SetTitleFont(42);
   mainFit1028->SetParameter(0,0.1720065);
   mainFit1028->SetParError(0,0.5800357);
   mainFit1028->SetParLimits(0,0,0);
   mainFit1028->SetParameter(1,0.758978);
   mainFit1028->SetParError(1,0.01917689);
   mainFit1028->SetParLimits(1,0,0);
   mainFit1028->Draw("same");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
