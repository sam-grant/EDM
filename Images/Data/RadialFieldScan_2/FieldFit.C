void FieldFit()
{
//=========Macro generated from canvas: c/c
//=========  (Sat Jan  2 14:42:46 2021) by ROOT version 6.22/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-75,493.3642,75,553.4769);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1015[6] = {
   -50,
   -30,
   -10,
   10,
   30,
   50};
   Double_t Graph0_fy1015[6] = {
   507.5273,
   513.7649,
   520.1006,
   526.1948,
   532.7888,
   539.0009};
   Double_t Graph0_fex1015[6] = {
   6.953121e-310,
   0,
   0,
   6.953121e-310,
   6.953121e-310,
   2.210387e-314};
   Double_t Graph0_fey1015[6] = {
   4.14423,
   3.08036,
   4.678774,
   4.217417,
   4.53219,
   4.457209};
   TGraphErrors *gre = new TGraphErrors(6,Graph0_fx1015,Graph0_fy1015,Graph0_fex1015,Graph0_fey1015);
   gre->SetName("Graph0");
   gre->SetTitle(";#LTB_{r}^{App}#GT [ppm];#LTy#GTupointQHV [mm#upointkV]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01015 = new TH1F("Graph_Graph01015","",100,-60,60);
   Graph_Graph01015->SetMinimum(499.3755);
   Graph_Graph01015->SetMaximum(547.4656);
   Graph_Graph01015->SetDirectory(0);
   Graph_Graph01015->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01015->SetLineColor(ci);
   Graph_Graph01015->GetXaxis()->SetTitle("#LTB_{r}^{App}#GT [ppm]");
   Graph_Graph01015->GetXaxis()->CenterTitle(true);
   Graph_Graph01015->GetXaxis()->SetLabelFont(42);
   Graph_Graph01015->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01015->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01015->GetXaxis()->SetTitleFont(42);
   Graph_Graph01015->GetYaxis()->SetTitle("#LTy#GTupointQHV [mm#upointkV]");
   Graph_Graph01015->GetYaxis()->CenterTitle(true);
   Graph_Graph01015->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01015->GetYaxis()->SetLabelFont(42);
   Graph_Graph01015->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01015->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01015->GetYaxis()->SetTitleFont(42);
   Graph_Graph01015->GetZaxis()->SetLabelFont(42);
   Graph_Graph01015->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01015->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01015);
   
   
   TF1 *mainFit1016 = new TF1("mainFit","[0]+[1]*x",-60,60, TF1::EAddToList::kNo);
   mainFit1016->SetFillColor(19);
   mainFit1016->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   mainFit1016->SetLineColor(ci);
   mainFit1016->SetLineWidth(2);
   mainFit1016->SetChisquare(0.002689257);
   mainFit1016->SetNDF(4);
   mainFit1016->GetXaxis()->SetLabelFont(42);
   mainFit1016->GetXaxis()->SetTitleOffset(1);
   mainFit1016->GetXaxis()->SetTitleFont(42);
   mainFit1016->GetYaxis()->SetLabelFont(42);
   mainFit1016->GetYaxis()->SetTitleFont(42);
   mainFit1016->SetParameter(0,523.2246);
   mainFit1016->SetParError(0,1.678099);
   mainFit1016->SetParLimits(0,0,0);
   mainFit1016->SetParameter(1,0.3149941);
   mainFit1016->SetParError(1,0.04942314);
   mainFit1016->SetParLimits(1,0,0);
   mainFit1016->SetParent(gre);
   gre->GetListOfFunctions()->Add(mainFit1016);
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.5,0.68,0.6,0.89,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(33);
   pt->SetTextFont(44);
   pt->SetTextSize(26);
   TText *pt_LaTex = pt->AddText("0.000672");
   pt_LaTex = pt->AddText("0.315#pm0.0494");
   pt_LaTex = pt->AddText("  523#pm 1.68");
   pt_LaTex = pt->AddText("1.66e+03#pm  260");
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
   TLine *line = new TLine(-60,0,-1661.061,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(-1661.061,499.3755,-1661.061,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   
   TF1 *mainFit1017 = new TF1("mainFit","[0]+[1]*x",-60,60, TF1::EAddToList::kNo);
   mainFit1017->SetFillColor(19);
   mainFit1017->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   mainFit1017->SetLineColor(ci);
   mainFit1017->SetLineWidth(2);
   mainFit1017->SetChisquare(0.002689257);
   mainFit1017->SetNDF(4);
   mainFit1017->GetXaxis()->SetLabelFont(42);
   mainFit1017->GetXaxis()->SetTitleOffset(1);
   mainFit1017->GetXaxis()->SetTitleFont(42);
   mainFit1017->GetYaxis()->SetLabelFont(42);
   mainFit1017->GetYaxis()->SetTitleFont(42);
   mainFit1017->SetParameter(0,523.2246);
   mainFit1017->SetParError(0,1.678099);
   mainFit1017->SetParLimits(0,0,0);
   mainFit1017->SetParameter(1,0.3149941);
   mainFit1017->SetParError(1,0.04942314);
   mainFit1017->SetParLimits(1,0,0);
   mainFit1017->Draw("same");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
