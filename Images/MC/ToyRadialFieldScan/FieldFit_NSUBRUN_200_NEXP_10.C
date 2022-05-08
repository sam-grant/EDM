void FieldFit_NSUBRUN_200_NEXP_10()
{
//=========Macro generated from canvas: c/c
//=========  (Thu May  5 13:00:28 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-75,-82.68558,75,100.5864);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1125[6] = {
   -50,
   -30,
   -10,
   10,
   30,
   50};
   Double_t Graph0_fy1125[6] = {
   -50.83515,
   -26.98487,
   -2.502636,
   21.77442,
   46.41466,
   69.35539};
   Double_t Graph0_fex1125[6] = {
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1125[6] = {
   1.305105,
   0.6851424,
   0.6856231,
   0.7322445,
   0.6856137,
   0.6856497};
   TGraphErrors *gre = new TGraphErrors(6,Graph0_fx1125,Graph0_fy1125,Graph0_fex1125,Graph0_fey1125);
   gre->SetName("Graph0");
   gre->SetTitle(";Applied #LTB_{r}#GT [ppm];#Delta#LTy#GT#upoint#DeltaV [mm#upointkV]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01125 = new TH1F("Graph_Graph01125","",100,-60,60);
   Graph_Graph01125->SetMinimum(-64.35838);
   Graph_Graph01125->SetMaximum(82.25917);
   Graph_Graph01125->SetDirectory(0);
   Graph_Graph01125->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01125->SetLineColor(ci);
   Graph_Graph01125->GetXaxis()->SetTitle("Applied #LTB_{r}#GT [ppm]");
   Graph_Graph01125->GetXaxis()->CenterTitle(true);
   Graph_Graph01125->GetXaxis()->SetLabelFont(42);
   Graph_Graph01125->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01125->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01125->GetXaxis()->SetTitleFont(42);
   Graph_Graph01125->GetYaxis()->SetTitle("#Delta#LTy#GT#upoint#DeltaV [mm#upointkV]");
   Graph_Graph01125->GetYaxis()->CenterTitle(true);
   Graph_Graph01125->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01125->GetYaxis()->SetLabelFont(42);
   Graph_Graph01125->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01125->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01125->GetYaxis()->SetTitleFont(42);
   Graph_Graph01125->GetZaxis()->SetLabelFont(42);
   Graph_Graph01125->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01125->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01125);
   
   
   TF1 *mainFit1126 = new TF1("mainFit","[0]+[1]*x",-50,50, TF1::EAddToList::kNo);
   mainFit1126->SetFillColor(19);
   mainFit1126->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   mainFit1126->SetLineColor(ci);
   mainFit1126->SetLineWidth(2);
   mainFit1126->SetChisquare(1.803135);
   mainFit1126->SetNDF(4);
   mainFit1126->GetXaxis()->SetLabelFont(42);
   mainFit1126->GetXaxis()->SetTitleOffset(1);
   mainFit1126->GetXaxis()->SetTitleFont(42);
   mainFit1126->GetYaxis()->SetLabelFont(42);
   mainFit1126->GetYaxis()->SetTitleFont(42);
   mainFit1126->SetParameter(0,9.530065);
   mainFit1126->SetParError(0,0.3091484);
   mainFit1126->SetParLimits(0,0,0);
   mainFit1126->SetParameter(1,1.207875);
   mainFit1126->SetParError(1,0.009752823);
   mainFit1126->SetParLimits(1,0,0);
   mainFit1126->SetParent(gre);
   gre->GetListOfFunctions()->Add(mainFit1126);
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.5,0.68,0.6,0.89,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(33);
   pt->SetTextFont(44);
   pt->SetTextSize(26);
   TText *pt_LaTex = pt->AddText("0.451");
   pt_LaTex = pt->AddText("1.21
#pm0.01
");
   pt_LaTex = pt->AddText("9.53
#pm0.3
");
   pt_LaTex = pt->AddText("7.9
#pm0.3
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
   TLine *line = new TLine(-60,0,-7.88994,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(-7.88994,-64.35838,-7.88994,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   
   TF1 *mainFit1127 = new TF1("mainFit","[0]+[1]*x",-50,50, TF1::EAddToList::kNo);
   mainFit1127->SetFillColor(19);
   mainFit1127->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   mainFit1127->SetLineColor(ci);
   mainFit1127->SetLineWidth(2);
   mainFit1127->SetChisquare(1.803135);
   mainFit1127->SetNDF(4);
   mainFit1127->GetXaxis()->SetLabelFont(42);
   mainFit1127->GetXaxis()->SetTitleOffset(1);
   mainFit1127->GetXaxis()->SetTitleFont(42);
   mainFit1127->GetYaxis()->SetLabelFont(42);
   mainFit1127->GetYaxis()->SetTitleFont(42);
   mainFit1127->SetParameter(0,9.530065);
   mainFit1127->SetParError(0,0.3091484);
   mainFit1127->SetParLimits(0,0,0);
   mainFit1127->SetParameter(1,1.207875);
   mainFit1127->SetParError(1,0.009752823);
   mainFit1127->SetParLimits(1,0,0);
   mainFit1127->Draw("same");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
