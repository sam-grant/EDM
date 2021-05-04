void FieldFit_pValCheck4()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Apr 21 21:52:17 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-75,-64.25419,75,63.68754);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1033[5] = {
   50,
   30,
   10,
   -10,
   -50};
   Double_t Graph0_fy1033[5] = {
   40.2432,
   21.28845,
   9.560696,
   -6.278757,
   -39.19233};
   Double_t Graph0_fex1033[5] = {
   0,
   0,
   0,
   6.95313e-310,
   2.124554e-314};
   Double_t Graph0_fey1033[5] = {
   2.120722,
   1.746103,
   2.020736,
   1.780272,
   3.738235};
   TGraphErrors *gre = new TGraphErrors(5,Graph0_fx1033,Graph0_fy1033,Graph0_fex1033,Graph0_fey1033);
   gre->SetName("Graph0");
   gre->SetTitle(";#LTB_{r}^{App}#GT [ppm];#LTy#GT#upointQHV [mm#upointkV]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01033 = new TH1F("Graph_Graph01033","",100,-60,60);
   Graph_Graph01033->SetMinimum(-51.46002);
   Graph_Graph01033->SetMaximum(50.89337);
   Graph_Graph01033->SetDirectory(0);
   Graph_Graph01033->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01033->SetLineColor(ci);
   Graph_Graph01033->GetXaxis()->SetTitle("#LTB_{r}^{App}#GT [ppm]");
   Graph_Graph01033->GetXaxis()->CenterTitle(true);
   Graph_Graph01033->GetXaxis()->SetLabelFont(42);
   Graph_Graph01033->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01033->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01033->GetXaxis()->SetTitleFont(42);
   Graph_Graph01033->GetYaxis()->SetTitle("#LTy#GT#upointQHV [mm#upointkV]");
   Graph_Graph01033->GetYaxis()->CenterTitle(true);
   Graph_Graph01033->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01033->GetYaxis()->SetLabelFont(42);
   Graph_Graph01033->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01033->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01033->GetYaxis()->SetTitleFont(42);
   Graph_Graph01033->GetZaxis()->SetLabelFont(42);
   Graph_Graph01033->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01033->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01033);
   
   
   TF1 *mainFit1034 = new TF1("mainFit","[0]+[1]*x",-60,60, TF1::EAddToList::kNo);
   mainFit1034->SetFillColor(19);
   mainFit1034->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   mainFit1034->SetLineColor(ci);
   mainFit1034->SetLineWidth(2);
   mainFit1034->SetChisquare(2.886609);
   mainFit1034->SetNDF(3);
   mainFit1034->GetXaxis()->SetLabelFont(42);
   mainFit1034->GetXaxis()->SetTitleOffset(1);
   mainFit1034->GetXaxis()->SetTitleFont(42);
   mainFit1034->GetYaxis()->SetLabelFont(42);
   mainFit1034->GetYaxis()->SetTitleFont(42);
   mainFit1034->SetParameter(0,0.6314927);
   mainFit1034->SetParError(0,1.038997);
   mainFit1034->SetParLimits(0,0,0);
   mainFit1034->SetParameter(1,0.7640843);
   mainFit1034->SetParError(1,0.03428195);
   mainFit1034->SetParLimits(1,0,0);
   mainFit1034->SetParent(gre);
   gre->GetListOfFunctions()->Add(mainFit1034);
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.5,0.68,0.6,0.89,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(33);
   pt->SetTextFont(44);
   pt->SetTextSize(26);
   TText *pt_LaTex = pt->AddText("0.962");
   pt_LaTex = pt->AddText("0.764#pm0.0343");
   pt_LaTex = pt->AddText("0.631#pm 1.04");
   pt_LaTex = pt->AddText("0.826#pm 1.38");
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
   TLine *line = new TLine(-60,0,-0.82647,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(-0.82647,-51.46002,-0.82647,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   
   TF1 *mainFit1035 = new TF1("mainFit","[0]+[1]*x",-60,60, TF1::EAddToList::kNo);
   mainFit1035->SetFillColor(19);
   mainFit1035->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   mainFit1035->SetLineColor(ci);
   mainFit1035->SetLineWidth(2);
   mainFit1035->SetChisquare(2.886609);
   mainFit1035->SetNDF(3);
   mainFit1035->GetXaxis()->SetLabelFont(42);
   mainFit1035->GetXaxis()->SetTitleOffset(1);
   mainFit1035->GetXaxis()->SetTitleFont(42);
   mainFit1035->GetYaxis()->SetLabelFont(42);
   mainFit1035->GetYaxis()->SetTitleFont(42);
   mainFit1035->SetParameter(0,0.6314927);
   mainFit1035->SetParError(0,1.038997);
   mainFit1035->SetParLimits(0,0,0);
   mainFit1035->SetParameter(1,0.7640843);
   mainFit1035->SetParError(1,0.03428195);
   mainFit1035->SetParLimits(1,0,0);
   mainFit1035->Draw("same");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
