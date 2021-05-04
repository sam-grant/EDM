void FieldFit_pValCheck0()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Apr 21 14:32:08 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-70,-67.13565,50,45.97329);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1025[5] = {
   30,
   10,
   -10,
   -30,
   -50};
   Double_t Graph0_fy1025[5] = {
   26.46113,
   8.313178,
   -12.30252,
   -30.34201,
   -46.87405};
   Double_t Graph0_fex1025[5] = {
   0,
   0,
   6.953125e-310,
   6.953125e-310,
   2.174905e-314};
   Double_t Graph0_fey1025[5] = {
   0.6606724,
   0.7665624,
   0.6743249,
   0.6752839,
   1.410115};
   TGraphErrors *gre = new TGraphErrors(5,Graph0_fx1025,Graph0_fy1025,Graph0_fex1025,Graph0_fey1025);
   gre->SetName("Graph0");
   gre->SetTitle(";#LTB_{r}^{App}#GT [ppm];#LTy#GT#upointQHV [mm#upointkV]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01025 = new TH1F("Graph_Graph01025","",100,-58,38);
   Graph_Graph01025->SetMinimum(-55.82476);
   Graph_Graph01025->SetMaximum(34.66239);
   Graph_Graph01025->SetDirectory(0);
   Graph_Graph01025->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01025->SetLineColor(ci);
   Graph_Graph01025->GetXaxis()->SetTitle("#LTB_{r}^{App}#GT [ppm]");
   Graph_Graph01025->GetXaxis()->CenterTitle(true);
   Graph_Graph01025->GetXaxis()->SetLabelFont(42);
   Graph_Graph01025->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01025->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01025->GetXaxis()->SetTitleFont(42);
   Graph_Graph01025->GetYaxis()->SetTitle("#LTy#GT#upointQHV [mm#upointkV]");
   Graph_Graph01025->GetYaxis()->CenterTitle(true);
   Graph_Graph01025->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01025->GetYaxis()->SetLabelFont(42);
   Graph_Graph01025->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01025->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01025->GetYaxis()->SetTitleFont(42);
   Graph_Graph01025->GetZaxis()->SetLabelFont(42);
   Graph_Graph01025->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01025->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01025);
   
   
   TF1 *mainFit1026 = new TF1("mainFit","[0]+[1]*x",-58,38, TF1::EAddToList::kNo);
   mainFit1026->SetFillColor(19);
   mainFit1026->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   mainFit1026->SetLineColor(ci);
   mainFit1026->SetLineWidth(2);
   mainFit1026->SetChisquare(5.561635);
   mainFit1026->SetNDF(3);
   mainFit1026->GetXaxis()->SetLabelFont(42);
   mainFit1026->GetXaxis()->SetTitleOffset(1);
   mainFit1026->GetXaxis()->SetTitleFont(42);
   mainFit1026->GetYaxis()->SetLabelFont(42);
   mainFit1026->GetYaxis()->SetTitleFont(42);
   mainFit1026->SetParameter(0,-1.889321);
   mainFit1026->SetParError(0,0.3379099);
   mainFit1026->SetParLimits(0,0,0);
   mainFit1026->SetParameter(1,0.9421517);
   mainFit1026->SetParError(1,0.01336326);
   mainFit1026->SetParLimits(1,0,0);
   mainFit1026->SetParent(gre);
   gre->GetListOfFunctions()->Add(mainFit1026);
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.5,0.68,0.6,0.89,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(33);
   pt->SetTextFont(44);
   pt->SetTextSize(26);
   TText *pt_LaTex = pt->AddText(" 1.85");
   pt_LaTex = pt->AddText("0.942#pm0.0134");
   pt_LaTex = pt->AddText("#minus1.89#pm0.338");
   pt_LaTex = pt->AddText("#minus2.01#pm0.363");
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
   TLine *line = new TLine(-58,0,2.005325,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(2.005325,-55.82476,2.005325,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   
   TF1 *mainFit1027 = new TF1("mainFit","[0]+[1]*x",-58,38, TF1::EAddToList::kNo);
   mainFit1027->SetFillColor(19);
   mainFit1027->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   mainFit1027->SetLineColor(ci);
   mainFit1027->SetLineWidth(2);
   mainFit1027->SetChisquare(5.561635);
   mainFit1027->SetNDF(3);
   mainFit1027->GetXaxis()->SetLabelFont(42);
   mainFit1027->GetXaxis()->SetTitleOffset(1);
   mainFit1027->GetXaxis()->SetTitleFont(42);
   mainFit1027->GetYaxis()->SetLabelFont(42);
   mainFit1027->GetYaxis()->SetTitleFont(42);
   mainFit1027->SetParameter(0,-1.889321);
   mainFit1027->SetParError(0,0.3379099);
   mainFit1027->SetParLimits(0,0,0);
   mainFit1027->SetParameter(1,0.9421517);
   mainFit1027->SetParError(1,0.01336326);
   mainFit1027->SetParLimits(1,0,0);
   mainFit1027->Draw("same");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
