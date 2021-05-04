void FieldFit_pValCheck0()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Apr 21 15:43:37 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-70,-70.09717,50,44.84438);
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
   24.91396,
   7.943401,
   -11.38637,
   -29.29108,
   -49.28785};
   Double_t Graph0_fex1025[5] = {
   0,
   0,
   6.953129e-310,
   6.953129e-310,
   2.129973e-314};
   Double_t Graph0_fey1025[5] = {
   0.7734933,
   0.8940724,
   0.7879525,
   0.7912512,
   1.652399};
   TGraphErrors *gre = new TGraphErrors(5,Graph0_fx1025,Graph0_fy1025,Graph0_fex1025,Graph0_fey1025);
   gre->SetName("Graph0");
   gre->SetTitle(";#LTB_{r}^{App}#GT [ppm];#LTy#GT#upointQHV [mm#upointkV]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01025 = new TH1F("Graph_Graph01025","",100,-58,38);
   Graph_Graph01025->SetMinimum(-58.60301);
   Graph_Graph01025->SetMaximum(33.35022);
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
   mainFit1026->SetChisquare(2.202323);
   mainFit1026->SetNDF(3);
   mainFit1026->GetXaxis()->SetLabelFont(42);
   mainFit1026->GetXaxis()->SetTitleOffset(1);
   mainFit1026->GetXaxis()->SetTitleFont(42);
   mainFit1026->GetYaxis()->SetLabelFont(42);
   mainFit1026->GetYaxis()->SetTitleFont(42);
   mainFit1026->SetParameter(0,-2.087204);
   mainFit1026->SetParError(0,0.3951906);
   mainFit1026->SetParLimits(0,0,0);
   mainFit1026->SetParameter(1,0.9163717);
   mainFit1026->SetParError(1,0.01564809);
   mainFit1026->SetParLimits(1,0,0);
   mainFit1026->SetParent(gre);
   gre->GetListOfFunctions()->Add(mainFit1026);
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.5,0.68,0.6,0.89,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(33);
   pt->SetTextFont(44);
   pt->SetTextSize(26);
   TText *pt_LaTex = pt->AddText("0.734");
   pt_LaTex = pt->AddText("0.916#pm0.0156");
   pt_LaTex = pt->AddText("#minus2.09#pm0.395");
   pt_LaTex = pt->AddText("#minus2.28#pm0.438");
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
   TLine *line = new TLine(-58,0,2.277682,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(2.277682,-58.60301,2.277682,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   
   TF1 *mainFit1027 = new TF1("mainFit","[0]+[1]*x",-58,38, TF1::EAddToList::kNo);
   mainFit1027->SetFillColor(19);
   mainFit1027->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   mainFit1027->SetLineColor(ci);
   mainFit1027->SetLineWidth(2);
   mainFit1027->SetChisquare(2.202323);
   mainFit1027->SetNDF(3);
   mainFit1027->GetXaxis()->SetLabelFont(42);
   mainFit1027->GetXaxis()->SetTitleOffset(1);
   mainFit1027->GetXaxis()->SetTitleFont(42);
   mainFit1027->GetYaxis()->SetLabelFont(42);
   mainFit1027->GetYaxis()->SetTitleFont(42);
   mainFit1027->SetParameter(0,-2.087204);
   mainFit1027->SetParError(0,0.3951906);
   mainFit1027->SetParLimits(0,0,0);
   mainFit1027->SetParameter(1,0.9163717);
   mainFit1027->SetParError(1,0.01564809);
   mainFit1027->SetParLimits(1,0,0);
   mainFit1027->Draw("same");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
