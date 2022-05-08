void FieldFitCheck_NSUBRUN_25_NEXP_50()
{
//=========Macro generated from canvas: c/c
//=========  (Thu May  5 13:01:50 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-75,-106.3854,75,398.9839);
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
   313.0185,
   -20.42,
   -4.422657,
   16.48833,
   39.25818,
   55.3107};
   Double_t Graph0_fex1015[6] = {
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1015[6] = {
   1.737172,
   1.737172,
   1.737172,
   1.737172,
   1.737172,
   1.737172};
   TGraphErrors *gre = new TGraphErrors(6,Graph0_fx1015,Graph0_fy1015,Graph0_fex1015,Graph0_fey1015);
   gre->SetName("Graph0");
   gre->SetTitle(";Applied #LTB_{r}#GT [ppm];#Delta#LTy#GT#upoint#DeltaV [mm#upointkV]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01015 = new TH1F("Graph_Graph01015","",100,-60,60);
   Graph_Graph01015->SetMinimum(-55.84845);
   Graph_Graph01015->SetMaximum(348.447);
   Graph_Graph01015->SetDirectory(0);
   Graph_Graph01015->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01015->SetLineColor(ci);
   Graph_Graph01015->GetXaxis()->SetTitle("Applied #LTB_{r}#GT [ppm]");
   Graph_Graph01015->GetXaxis()->CenterTitle(true);
   Graph_Graph01015->GetXaxis()->SetLabelFont(42);
   Graph_Graph01015->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01015->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01015->GetXaxis()->SetTitleFont(42);
   Graph_Graph01015->GetYaxis()->SetTitle("#Delta#LTy#GT#upoint#DeltaV [mm#upointkV]");
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
   
   
   TF1 *checkFit1016 = new TF1("checkFit","[0]+[1]*x",-50,50, TF1::EAddToList::kNo);
   checkFit1016->SetFillColor(19);
   checkFit1016->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   checkFit1016->SetLineColor(ci);
   checkFit1016->SetLineWidth(2);
   checkFit1016->SetChisquare(19814.6);
   checkFit1016->SetNDF(4);
   checkFit1016->GetXaxis()->SetLabelFont(42);
   checkFit1016->GetXaxis()->SetTitleOffset(1);
   checkFit1016->GetXaxis()->SetTitleFont(42);
   checkFit1016->GetYaxis()->SetLabelFont(42);
   checkFit1016->GetYaxis()->SetTitleFont(42);
   checkFit1016->SetParameter(0,66.53884);
   checkFit1016->SetParError(0,0.7091976);
   checkFit1016->SetParLimits(0,0,0);
   checkFit1016->SetParameter(1,-1.555134);
   checkFit1016->SetParError(1,0.02076318);
   checkFit1016->SetParLimits(1,0,0);
   checkFit1016->SetParent(gre);
   gre->GetListOfFunctions()->Add(checkFit1016);
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.5,0.68,0.6,0.89,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(33);
   pt->SetTextFont(44);
   pt->SetTextSize(26);
   TText *pt_LaTex = pt->AddText("4.95e+03");
   pt_LaTex = pt->AddText("-1.56
#pm0.02
");
   pt_LaTex = pt->AddText("66.5
#pm0.7
");
   pt_LaTex = pt->AddText("-43
#pm0.7
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
   TLine *line = new TLine(-60,0,42.78658,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(42.78658,-55.84845,42.78658,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   
   TF1 *checkFit1017 = new TF1("checkFit","[0]+[1]*x",-50,50, TF1::EAddToList::kNo);
   checkFit1017->SetFillColor(19);
   checkFit1017->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   checkFit1017->SetLineColor(ci);
   checkFit1017->SetLineWidth(2);
   checkFit1017->SetChisquare(19814.6);
   checkFit1017->SetNDF(4);
   checkFit1017->GetXaxis()->SetLabelFont(42);
   checkFit1017->GetXaxis()->SetTitleOffset(1);
   checkFit1017->GetXaxis()->SetTitleFont(42);
   checkFit1017->GetYaxis()->SetLabelFont(42);
   checkFit1017->GetYaxis()->SetTitleFont(42);
   checkFit1017->SetParameter(0,66.53884);
   checkFit1017->SetParError(0,0.7091976);
   checkFit1017->SetParLimits(0,0,0);
   checkFit1017->SetParameter(1,-1.555134);
   checkFit1017->SetParError(1,0.02076318);
   checkFit1017->SetParLimits(1,0,0);
   checkFit1017->Draw("same");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
