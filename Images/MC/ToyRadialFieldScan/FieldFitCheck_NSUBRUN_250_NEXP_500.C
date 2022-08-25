void FieldFitCheck_NSUBRUN_250_NEXP_500()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Jun 24 16:05:52 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-75,-106.2611,75,397.4597);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1159[6] = {
   -50,
   -30,
   -10,
   10,
   30,
   50};
   Double_t Graph0_fy1159[6] = {
   312.9621,
   -21.76346,
   -2.799614,
   18.13076,
   38.4655,
   58.3673};
   Double_t Graph0_fex1159[6] = {
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1159[6] = {
   0.5441451,
   0.5441451,
   0.5441451,
   0.5441451,
   0.5441451,
   0.5441451};
   TGraphErrors *gre = new TGraphErrors(6,Graph0_fx1159,Graph0_fy1159,Graph0_fex1159,Graph0_fey1159);
   gre->SetName("Graph0");
   gre->SetTitle(";Applied #LTB_{r}#GT [ppm];#Delta#LTy#GT#upoint#DeltaV [mm#upointkV]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01159 = new TH1F("Graph_Graph01159","",100,-60,60);
   Graph_Graph01159->SetMinimum(-55.88899);
   Graph_Graph01159->SetMaximum(347.0876);
   Graph_Graph01159->SetDirectory(0);
   Graph_Graph01159->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01159->SetLineColor(ci);
   Graph_Graph01159->GetXaxis()->SetTitle("Applied #LTB_{r}#GT [ppm]");
   Graph_Graph01159->GetXaxis()->CenterTitle(true);
   Graph_Graph01159->GetXaxis()->SetLabelFont(42);
   Graph_Graph01159->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01159->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01159->GetXaxis()->SetTitleFont(42);
   Graph_Graph01159->GetYaxis()->SetTitle("#Delta#LTy#GT#upoint#DeltaV [mm#upointkV]");
   Graph_Graph01159->GetYaxis()->CenterTitle(true);
   Graph_Graph01159->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01159->GetYaxis()->SetLabelFont(42);
   Graph_Graph01159->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01159->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01159->GetYaxis()->SetTitleFont(42);
   Graph_Graph01159->GetZaxis()->SetLabelFont(42);
   Graph_Graph01159->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01159->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01159);
   
   
   TF1 *checkFit1160 = new TF1("checkFit","[0]+[1]*x",-50,50, TF1::EAddToList::kNo);
   checkFit1160->SetFillColor(19);
   checkFit1160->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   checkFit1160->SetLineColor(ci);
   checkFit1160->SetLineWidth(2);
   checkFit1160->SetChisquare(203069.7);
   checkFit1160->SetNDF(4);
   checkFit1160->GetXaxis()->SetLabelFont(42);
   checkFit1160->GetXaxis()->SetTitleOffset(1);
   checkFit1160->GetXaxis()->SetTitleFont(42);
   checkFit1160->GetYaxis()->SetLabelFont(42);
   checkFit1160->GetYaxis()->SetTitleFont(42);
   checkFit1160->SetParameter(0,67.22709);
   checkFit1160->SetParError(0,0.2221463);
   checkFit1160->SetParLimits(0,0,0);
   checkFit1160->SetParameter(1,-1.530509);
   checkFit1160->SetParError(1,0.006503778);
   checkFit1160->SetParLimits(1,0,0);
   checkFit1160->SetParent(gre);
   gre->GetListOfFunctions()->Add(checkFit1160);
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.5,0.68,0.6,0.89,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(33);
   pt->SetTextFont(44);
   pt->SetTextSize(26);
   TText *pt_LaTex = pt->AddText("5.08e+04");
   pt_LaTex = pt->AddText("-1.53
#pm0.007
");
   pt_LaTex = pt->AddText("67.2
#pm0.2
");
   pt_LaTex = pt->AddText("-44
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
   TLine *line = new TLine(-60,0,43.92465,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(43.92465,-55.88899,43.92465,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   
   TF1 *checkFit1161 = new TF1("checkFit","[0]+[1]*x",-50,50, TF1::EAddToList::kNo);
   checkFit1161->SetFillColor(19);
   checkFit1161->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   checkFit1161->SetLineColor(ci);
   checkFit1161->SetLineWidth(2);
   checkFit1161->SetChisquare(203069.7);
   checkFit1161->SetNDF(4);
   checkFit1161->GetXaxis()->SetLabelFont(42);
   checkFit1161->GetXaxis()->SetTitleOffset(1);
   checkFit1161->GetXaxis()->SetTitleFont(42);
   checkFit1161->GetYaxis()->SetLabelFont(42);
   checkFit1161->GetYaxis()->SetTitleFont(42);
   checkFit1161->SetParameter(0,67.22709);
   checkFit1161->SetParError(0,0.2221463);
   checkFit1161->SetParLimits(0,0,0);
   checkFit1161->SetParameter(1,-1.530509);
   checkFit1161->SetParError(1,0.006503778);
   checkFit1161->SetParLimits(1,0,0);
   checkFit1161->Draw("same");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
