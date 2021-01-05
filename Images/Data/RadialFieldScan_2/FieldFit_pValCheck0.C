void FieldFit_pValCheck0()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Jan  4 18:20:54 2021) by ROOT version 6.22/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-70,-56.76052,50,37.97082);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1030[5] = {
   30,
   10,
   -10,
   -30,
   -50};
   Double_t Graph0_fy1030[5] = {
   20.96023,
   9.013131,
   -6.128556,
   -23.37896,
   -38.35743};
   Double_t Graph0_fex1030[5] = {
   0,
   0,
   6.953117e-310,
   6.953117e-310,
   2.250438e-314};
   Double_t Graph0_fey1030[5] = {
   1.222034,
   1.413793,
   1.245862,
   1.252617,
   2.614538};
   TGraphErrors *gre = new TGraphErrors(5,Graph0_fx1030,Graph0_fy1030,Graph0_fex1030,Graph0_fey1030);
   gre->SetName("Graph0");
   gre->SetTitle(";#LTB_{r}^{App}#GT [ppm];#LTy#GT#upointQHV [mm#upointkV]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01030 = new TH1F("Graph_Graph01030","",100,-58,38);
   Graph_Graph01030->SetMinimum(-47.28739);
   Graph_Graph01030->SetMaximum(28.49769);
   Graph_Graph01030->SetDirectory(0);
   Graph_Graph01030->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01030->SetLineColor(ci);
   Graph_Graph01030->GetXaxis()->SetTitle("#LTB_{r}^{App}#GT [ppm]");
   Graph_Graph01030->GetXaxis()->CenterTitle(true);
   Graph_Graph01030->GetXaxis()->SetLabelFont(42);
   Graph_Graph01030->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01030->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01030->GetXaxis()->SetTitleFont(42);
   Graph_Graph01030->GetYaxis()->SetTitle("#LTy#GT#upointQHV [mm#upointkV]");
   Graph_Graph01030->GetYaxis()->CenterTitle(true);
   Graph_Graph01030->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01030->GetYaxis()->SetLabelFont(42);
   Graph_Graph01030->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01030->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01030->GetYaxis()->SetTitleFont(42);
   Graph_Graph01030->GetZaxis()->SetLabelFont(42);
   Graph_Graph01030->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01030->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01030);
   
   
   TF1 *mainFit1031 = new TF1("mainFit","[0]+[1]*x",-58,38, TF1::EAddToList::kNo);
   mainFit1031->SetFillColor(19);
   mainFit1031->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   mainFit1031->SetLineColor(ci);
   mainFit1031->SetLineWidth(2);
   mainFit1031->SetChisquare(4.489027);
   mainFit1031->SetNDF(3);
   mainFit1031->GetXaxis()->SetLabelFont(42);
   mainFit1031->GetXaxis()->SetTitleOffset(1);
   mainFit1031->GetXaxis()->SetTitleFont(42);
   mainFit1031->GetYaxis()->SetLabelFont(42);
   mainFit1031->GetYaxis()->SetTitleFont(42);
   mainFit1031->SetParameter(0,-0.04646581);
   mainFit1031->SetParError(0,0.6248521);
   mainFit1031->SetParLimits(0,0,0);
   mainFit1031->SetParameter(1,0.7442719);
   mainFit1031->SetParError(1,0.0247453);
   mainFit1031->SetParLimits(1,0,0);
   mainFit1031->SetParent(gre);
   gre->GetListOfFunctions()->Add(mainFit1031);
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.5,0.68,0.6,0.89,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(33);
   pt->SetTextFont(44);
   pt->SetTextSize(26);
   TText *pt_LaTex = pt->AddText("  1.5");
   pt_LaTex = pt->AddText("0.744#pm0.0247");
   pt_LaTex = pt->AddText("#minus0.0465#pm0.625");
   pt_LaTex = pt->AddText("0.0624#pm 0.84");
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
   TLine *line = new TLine(-58,0,0.06243123,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(0.06243123,-47.28739,0.06243123,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   
   TF1 *mainFit1032 = new TF1("mainFit","[0]+[1]*x",-58,38, TF1::EAddToList::kNo);
   mainFit1032->SetFillColor(19);
   mainFit1032->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   mainFit1032->SetLineColor(ci);
   mainFit1032->SetLineWidth(2);
   mainFit1032->SetChisquare(4.489027);
   mainFit1032->SetNDF(3);
   mainFit1032->GetXaxis()->SetLabelFont(42);
   mainFit1032->GetXaxis()->SetTitleOffset(1);
   mainFit1032->GetXaxis()->SetTitleFont(42);
   mainFit1032->GetYaxis()->SetLabelFont(42);
   mainFit1032->GetYaxis()->SetTitleFont(42);
   mainFit1032->SetParameter(0,-0.04646581);
   mainFit1032->SetParError(0,0.6248521);
   mainFit1032->SetParLimits(0,0,0);
   mainFit1032->SetParameter(1,0.7442719);
   mainFit1032->SetParError(1,0.0247453);
   mainFit1032->SetParLimits(1,0,0);
   mainFit1032->Draw("same");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
