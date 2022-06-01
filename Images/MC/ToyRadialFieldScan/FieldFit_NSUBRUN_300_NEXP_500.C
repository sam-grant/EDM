void FieldFit_NSUBRUN_300_NEXP_500()
{
//=========Macro generated from canvas: c/c
//=========  (Tue May 31 19:16:43 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-75,-80.20664,75,100.4178);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1189[6] = {
   -50,
   -30,
   -10,
   10,
   30,
   50};
   Double_t Graph0_fy1189[6] = {
   -49.03825,
   -26.65051,
   -2.47927,
   21.27195,
   45.89149,
   69.75465};
   Double_t Graph0_fex1189[6] = {
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1189[6] = {
   1.064318,
   0.5589678,
   0.5589795,
   0.5969809,
   0.558975,
   0.5590385};
   TGraphErrors *gre = new TGraphErrors(6,Graph0_fx1189,Graph0_fy1189,Graph0_fex1189,Graph0_fey1189);
   gre->SetName("Graph0");
   gre->SetTitle(";Applied #LTB_{r}#GT [ppm];#Delta#LTy#GT#upoint#DeltaV [mm#upointkV]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01189 = new TH1F("Graph_Graph01189","",100,-60,60);
   Graph_Graph01189->SetMinimum(-62.1442);
   Graph_Graph01189->SetMaximum(82.35532);
   Graph_Graph01189->SetDirectory(0);
   Graph_Graph01189->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01189->SetLineColor(ci);
   Graph_Graph01189->GetXaxis()->SetTitle("Applied #LTB_{r}#GT [ppm]");
   Graph_Graph01189->GetXaxis()->CenterTitle(true);
   Graph_Graph01189->GetXaxis()->SetLabelFont(42);
   Graph_Graph01189->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01189->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01189->GetXaxis()->SetTitleFont(42);
   Graph_Graph01189->GetYaxis()->SetTitle("#Delta#LTy#GT#upoint#DeltaV [mm#upointkV]");
   Graph_Graph01189->GetYaxis()->CenterTitle(true);
   Graph_Graph01189->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01189->GetYaxis()->SetLabelFont(42);
   Graph_Graph01189->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01189->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01189->GetYaxis()->SetTitleFont(42);
   Graph_Graph01189->GetZaxis()->SetLabelFont(42);
   Graph_Graph01189->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01189->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01189);
   
   
   TF1 *mainFit1190 = new TF1("mainFit","[0]+[1]*x",-50,50, TF1::EAddToList::kNo);
   mainFit1190->SetFillColor(19);
   mainFit1190->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   mainFit1190->SetLineColor(ci);
   mainFit1190->SetLineWidth(2);
   mainFit1190->SetChisquare(2.480497);
   mainFit1190->SetNDF(4);
   mainFit1190->GetXaxis()->SetLabelFont(42);
   mainFit1190->GetXaxis()->SetTitleOffset(1);
   mainFit1190->GetXaxis()->SetTitleFont(42);
   mainFit1190->GetYaxis()->SetLabelFont(42);
   mainFit1190->GetYaxis()->SetTitleFont(42);
   mainFit1190->SetParameter(0,9.637265);
   mainFit1190->SetParError(0,0.252103);
   mainFit1190->SetParLimits(0,0,0);
   mainFit1190->SetParameter(1,1.200352);
   mainFit1190->SetParError(1,0.007953415);
   mainFit1190->SetParLimits(1,0,0);
   mainFit1190->SetParent(gre);
   gre->GetListOfFunctions()->Add(mainFit1190);
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.5,0.68,0.6,0.89,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(33);
   pt->SetTextFont(44);
   pt->SetTextSize(26);
   TText *pt_LaTex = pt->AddText(" 0.62");
   pt_LaTex = pt->AddText("1.2
#pm0.008
");
   pt_LaTex = pt->AddText("9.64
#pm0.3
");
   pt_LaTex = pt->AddText("8
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
   TLine *line = new TLine(-60,0,-8.028697,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(-8.028697,-62.1442,-8.028697,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   
   TF1 *mainFit1191 = new TF1("mainFit","[0]+[1]*x",-50,50, TF1::EAddToList::kNo);
   mainFit1191->SetFillColor(19);
   mainFit1191->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   mainFit1191->SetLineColor(ci);
   mainFit1191->SetLineWidth(2);
   mainFit1191->SetChisquare(2.480497);
   mainFit1191->SetNDF(4);
   mainFit1191->GetXaxis()->SetLabelFont(42);
   mainFit1191->GetXaxis()->SetTitleOffset(1);
   mainFit1191->GetXaxis()->SetTitleFont(42);
   mainFit1191->GetYaxis()->SetLabelFont(42);
   mainFit1191->GetYaxis()->SetTitleFont(42);
   mainFit1191->SetParameter(0,9.637265);
   mainFit1191->SetParError(0,0.252103);
   mainFit1191->SetParLimits(0,0,0);
   mainFit1191->SetParameter(1,1.200352);
   mainFit1191->SetParError(1,0.007953415);
   mainFit1191->SetParLimits(1,0,0);
   mainFit1191->Draw("same");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
