void FieldFit_NSUBRUN_325_NEXP_500()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Jun 24 16:05:57 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-75,-80.325,75,99.86805);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1205[6] = {
   -50,
   -30,
   -10,
   10,
   30,
   50};
   Double_t Graph0_fy1205[6] = {
   -49.27028,
   -25.62585,
   -2.332397,
   21.64419,
   45.60128,
   69.29891};
   Double_t Graph0_fex1205[6] = {
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1205[6] = {
   1.022546,
   0.5369654,
   0.5369758,
   0.5735226,
   0.5370699,
   0.5369682};
   TGraphErrors *gre = new TGraphErrors(6,Graph0_fx1205,Graph0_fy1205,Graph0_fex1205,Graph0_fey1205);
   gre->SetName("Graph0");
   gre->SetTitle(";Applied #LTB_{r}#GT [ppm];#Delta#LTy#GT#upoint#DeltaV [mm#upointkV]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01205 = new TH1F("Graph_Graph01205","",100,-60,60);
   Graph_Graph01205->SetMinimum(-62.30569);
   Graph_Graph01205->SetMaximum(81.84875);
   Graph_Graph01205->SetDirectory(0);
   Graph_Graph01205->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01205->SetLineColor(ci);
   Graph_Graph01205->GetXaxis()->SetTitle("Applied #LTB_{r}#GT [ppm]");
   Graph_Graph01205->GetXaxis()->CenterTitle(true);
   Graph_Graph01205->GetXaxis()->SetLabelFont(42);
   Graph_Graph01205->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01205->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01205->GetXaxis()->SetTitleFont(42);
   Graph_Graph01205->GetYaxis()->SetTitle("#Delta#LTy#GT#upoint#DeltaV [mm#upointkV]");
   Graph_Graph01205->GetYaxis()->CenterTitle(true);
   Graph_Graph01205->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01205->GetYaxis()->SetLabelFont(42);
   Graph_Graph01205->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01205->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01205->GetYaxis()->SetTitleFont(42);
   Graph_Graph01205->GetZaxis()->SetLabelFont(42);
   Graph_Graph01205->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01205->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01205);
   
   
   TF1 *mainFit1206 = new TF1("mainFit","[0]+[1]*x",-50,50, TF1::EAddToList::kNo);
   mainFit1206->SetFillColor(19);
   mainFit1206->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   mainFit1206->SetLineColor(ci);
   mainFit1206->SetLineWidth(2);
   mainFit1206->SetChisquare(0.5580923);
   mainFit1206->SetNDF(4);
   mainFit1206->GetXaxis()->SetLabelFont(42);
   mainFit1206->GetXaxis()->SetTitleOffset(1);
   mainFit1206->GetXaxis()->SetTitleFont(42);
   mainFit1206->GetYaxis()->SetLabelFont(42);
   mainFit1206->GetYaxis()->SetTitleFont(42);
   mainFit1206->SetParameter(0,9.855846);
   mainFit1206->SetParError(0,0.2421903);
   mainFit1206->SetParLimits(0,0,0);
   mainFit1206->SetParameter(1,1.18782);
   mainFit1206->SetParError(1,0.007640319);
   mainFit1206->SetParLimits(1,0,0);
   mainFit1206->SetParent(gre);
   gre->GetListOfFunctions()->Add(mainFit1206);
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.5,0.68,0.6,0.89,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(33);
   pt->SetTextFont(44);
   pt->SetTextSize(26);
   TText *pt_LaTex = pt->AddText(" 0.14");
   pt_LaTex = pt->AddText("1.19
#pm0.008
");
   pt_LaTex = pt->AddText("9.86
#pm0.2
");
   pt_LaTex = pt->AddText("8.3
#pm0.2
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
   TLine *line = new TLine(-60,0,-8.297424,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(-8.297424,-62.30569,-8.297424,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   
   TF1 *mainFit1207 = new TF1("mainFit","[0]+[1]*x",-50,50, TF1::EAddToList::kNo);
   mainFit1207->SetFillColor(19);
   mainFit1207->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   mainFit1207->SetLineColor(ci);
   mainFit1207->SetLineWidth(2);
   mainFit1207->SetChisquare(0.5580923);
   mainFit1207->SetNDF(4);
   mainFit1207->GetXaxis()->SetLabelFont(42);
   mainFit1207->GetXaxis()->SetTitleOffset(1);
   mainFit1207->GetXaxis()->SetTitleFont(42);
   mainFit1207->GetYaxis()->SetLabelFont(42);
   mainFit1207->GetYaxis()->SetTitleFont(42);
   mainFit1207->SetParameter(0,9.855846);
   mainFit1207->SetParError(0,0.2421903);
   mainFit1207->SetParLimits(0,0,0);
   mainFit1207->SetParameter(1,1.18782);
   mainFit1207->SetParError(1,0.007640319);
   mainFit1207->SetParLimits(1,0,0);
   mainFit1207->Draw("same");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
