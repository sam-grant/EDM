void FieldFit_pValCheck5()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Apr 23 18:48:45 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-50,-47.27722,70,60.23823);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1035[5] = {
   50,
   30,
   10,
   -10,
   -30};
   Double_t Graph0_fy1035[5] = {
   40.84381,
   24.20023,
   7.823094,
   -10.13141,
   -28.0841};
   Double_t Graph0_fex1035[5] = {
   0,
   0,
   0,
   6.953129e-310,
   6.953129e-310};
   Double_t Graph0_fey1035[5] = {
   1.475175,
   1.242858,
   1.440362,
   1.26852,
   1.273873};
   TGraphErrors *gre = new TGraphErrors(5,Graph0_fx1035,Graph0_fy1035,Graph0_fex1035,Graph0_fey1035);
   gre->SetName("Graph0");
   gre->SetTitle(";#LTB_{r}^{App}#GT [ppm];#LTy#GT#upointQHV [mm#upointkV]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01035 = new TH1F("Graph_Graph01035","",100,-38,58);
   Graph_Graph01035->SetMinimum(-36.52567);
   Graph_Graph01035->SetMaximum(49.48669);
   Graph_Graph01035->SetDirectory(0);
   Graph_Graph01035->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01035->SetLineColor(ci);
   Graph_Graph01035->GetXaxis()->SetTitle("#LTB_{r}^{App}#GT [ppm]");
   Graph_Graph01035->GetXaxis()->CenterTitle(true);
   Graph_Graph01035->GetXaxis()->SetLabelFont(42);
   Graph_Graph01035->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01035->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01035->GetXaxis()->SetTitleFont(42);
   Graph_Graph01035->GetYaxis()->SetTitle("#LTy#GT#upointQHV [mm#upointkV]");
   Graph_Graph01035->GetYaxis()->CenterTitle(true);
   Graph_Graph01035->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01035->GetYaxis()->SetLabelFont(42);
   Graph_Graph01035->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01035->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01035->GetYaxis()->SetTitleFont(42);
   Graph_Graph01035->GetZaxis()->SetLabelFont(42);
   Graph_Graph01035->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01035->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01035);
   
   
   TF1 *mainFit1036 = new TF1("mainFit","[0]+[1]*x",-38,58, TF1::EAddToList::kNo);
   mainFit1036->SetFillColor(19);
   mainFit1036->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   mainFit1036->SetLineColor(ci);
   mainFit1036->SetLineWidth(2);
   mainFit1036->SetChisquare(0.7273479);
   mainFit1036->SetNDF(3);
   mainFit1036->GetXaxis()->SetLabelFont(42);
   mainFit1036->GetXaxis()->SetTitleOffset(1);
   mainFit1036->GetXaxis()->SetTitleFont(42);
   mainFit1036->GetYaxis()->SetLabelFont(42);
   mainFit1036->GetYaxis()->SetTitleFont(42);
   mainFit1036->SetParameter(0,-1.703137);
   mainFit1036->SetParError(0,0.6183872);
   mainFit1036->SetParLimits(0,0,0);
   mainFit1036->SetParameter(1,0.8623935);
   mainFit1036->SetParError(1,0.0212379);
   mainFit1036->SetParLimits(1,0,0);
   mainFit1036->SetParent(gre);
   gre->GetListOfFunctions()->Add(mainFit1036);
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.5,0.68,0.6,0.89,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(33);
   pt->SetTextFont(44);
   pt->SetTextSize(26);
   TText *pt_LaTex = pt->AddText("0.242");
   pt_LaTex = pt->AddText("0.862#pm0.0212");
   pt_LaTex = pt->AddText(" #minus1.7#pm0.618");
   pt_LaTex = pt->AddText("#minus1.97#pm0.705");
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
   TLine *line = new TLine(-38,0,1.974895,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(1.974895,-36.52567,1.974895,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   
   TF1 *mainFit1037 = new TF1("mainFit","[0]+[1]*x",-38,58, TF1::EAddToList::kNo);
   mainFit1037->SetFillColor(19);
   mainFit1037->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   mainFit1037->SetLineColor(ci);
   mainFit1037->SetLineWidth(2);
   mainFit1037->SetChisquare(0.7273479);
   mainFit1037->SetNDF(3);
   mainFit1037->GetXaxis()->SetLabelFont(42);
   mainFit1037->GetXaxis()->SetTitleOffset(1);
   mainFit1037->GetXaxis()->SetTitleFont(42);
   mainFit1037->GetYaxis()->SetLabelFont(42);
   mainFit1037->GetYaxis()->SetTitleFont(42);
   mainFit1037->SetParameter(0,-1.703137);
   mainFit1037->SetParError(0,0.6183872);
   mainFit1037->SetParLimits(0,0,0);
   mainFit1037->SetParameter(1,0.8623935);
   mainFit1037->SetParError(1,0.0212379);
   mainFit1037->SetParLimits(1,0,0);
   mainFit1037->Draw("same");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
