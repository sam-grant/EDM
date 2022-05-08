void FieldFit_NSUBRUN_125_NEXP_0()
{
//=========Macro generated from canvas: c/c
//=========  (Thu May  5 12:48:42 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-75,-81.23298,75,99.45319);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1077[6] = {
   -50,
   -30,
   -10,
   10,
   30,
   50};
   Double_t Graph0_fy1077[6] = {
   -49.46372,
   -27.65224,
   -2.404197,
   20.61036,
   45.35473,
   68.46937};
   Double_t Graph0_fex1077[6] = {
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1077[6] = {
   1.654896,
   0.8693584,
   0.8694688,
   0.9285976,
   0.8693753,
   0.8694566};
   TGraphErrors *gre = new TGraphErrors(6,Graph0_fx1077,Graph0_fy1077,Graph0_fex1077,Graph0_fey1077);
   gre->SetName("Graph0");
   gre->SetTitle(";Applied #LTB_{r}#GT [ppm];#Delta#LTy#GT#upoint#DeltaV [mm#upointkV]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01077 = new TH1F("Graph_Graph01077","",100,-60,60);
   Graph_Graph01077->SetMinimum(-63.16436);
   Graph_Graph01077->SetMaximum(81.38457);
   Graph_Graph01077->SetDirectory(0);
   Graph_Graph01077->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01077->SetLineColor(ci);
   Graph_Graph01077->GetXaxis()->SetTitle("Applied #LTB_{r}#GT [ppm]");
   Graph_Graph01077->GetXaxis()->CenterTitle(true);
   Graph_Graph01077->GetXaxis()->SetLabelFont(42);
   Graph_Graph01077->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01077->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01077->GetXaxis()->SetTitleFont(42);
   Graph_Graph01077->GetYaxis()->SetTitle("#Delta#LTy#GT#upoint#DeltaV [mm#upointkV]");
   Graph_Graph01077->GetYaxis()->CenterTitle(true);
   Graph_Graph01077->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01077->GetYaxis()->SetLabelFont(42);
   Graph_Graph01077->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01077->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01077->GetYaxis()->SetTitleFont(42);
   Graph_Graph01077->GetZaxis()->SetLabelFont(42);
   Graph_Graph01077->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01077->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01077);
   
   
   TF1 *mainFit1078 = new TF1("mainFit","[0]+[1]*x",-50,50, TF1::EAddToList::kNo);
   mainFit1078->SetFillColor(19);
   mainFit1078->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   mainFit1078->SetLineColor(ci);
   mainFit1078->SetLineWidth(2);
   mainFit1078->SetChisquare(2.424236);
   mainFit1078->SetNDF(4);
   mainFit1078->GetXaxis()->SetLabelFont(42);
   mainFit1078->GetXaxis()->SetTitleOffset(1);
   mainFit1078->GetXaxis()->SetTitleFont(42);
   mainFit1078->GetYaxis()->SetLabelFont(42);
   mainFit1078->GetYaxis()->SetTitleFont(42);
   mainFit1078->SetParameter(0,9.006431);
   mainFit1078->SetParError(0,0.3921009);
   mainFit1078->SetParLimits(0,0,0);
   mainFit1078->SetParameter(1,1.194763);
   mainFit1078->SetParError(1,0.01236933);
   mainFit1078->SetParLimits(1,0,0);
   mainFit1078->SetParent(gre);
   gre->GetListOfFunctions()->Add(mainFit1078);
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.5,0.68,0.6,0.89,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(33);
   pt->SetTextFont(44);
   pt->SetTextSize(26);
   TText *pt_LaTex = pt->AddText("0.606");
   pt_LaTex = pt->AddText("1.19
#pm0.01
");
   pt_LaTex = pt->AddText("9.01
#pm0.4
");
   pt_LaTex = pt->AddText("7.5
#pm0.4
");
   pt->Draw();
   
   pt = new TPaveText(0.11,0.68,0.33,0.89,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(13);
   pt->SetTextFont(44);
   pt->SetTextSize(26);
   pt_LaTex = pt->AddText("#chi^{2}/ndf");
   pt_LaTex = pt->AddText("Gradient");
   pt_LaTex = pt->AddText("Y-intercept [mm#upointkV]");
   pt_LaTex = pt->AddText("Background #LTB_{r}#GT [ppm]");
   pt->Draw();
   TLine *line = new TLine(-60,0,-7.538257,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(-7.538257,-63.16436,-7.538257,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   
   TF1 *mainFit1079 = new TF1("mainFit","[0]+[1]*x",-50,50, TF1::EAddToList::kNo);
   mainFit1079->SetFillColor(19);
   mainFit1079->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   mainFit1079->SetLineColor(ci);
   mainFit1079->SetLineWidth(2);
   mainFit1079->SetChisquare(2.424236);
   mainFit1079->SetNDF(4);
   mainFit1079->GetXaxis()->SetLabelFont(42);
   mainFit1079->GetXaxis()->SetTitleOffset(1);
   mainFit1079->GetXaxis()->SetTitleFont(42);
   mainFit1079->GetYaxis()->SetLabelFont(42);
   mainFit1079->GetYaxis()->SetTitleFont(42);
   mainFit1079->SetParameter(0,9.006431);
   mainFit1079->SetParError(0,0.3921009);
   mainFit1079->SetParLimits(0,0,0);
   mainFit1079->SetParameter(1,1.194763);
   mainFit1079->SetParError(1,0.01236933);
   mainFit1079->SetParLimits(1,0,0);
   mainFit1079->Draw("same");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
