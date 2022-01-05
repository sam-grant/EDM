void FieldFitCheck_NSUBRUN_300_NEXP_0()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Jan  5 17:07:03 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-45,-38.61291,45,55.73433);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1095[2] = {
   30,
   -30};
   Double_t Graph0_fy1095[2] = {
   39.37968,
   -22.25826};
   Double_t Graph0_fex1095[2] = {
   0,
   0};
   Double_t Graph0_fey1095[2] = {
   0.6301075,
   0.6301075};
   TGraphErrors *gre = new TGraphErrors(2,Graph0_fx1095,Graph0_fy1095,Graph0_fex1095,Graph0_fey1095);
   gre->SetName("Graph0");
   gre->SetTitle(";Applied #LTB_{r}#GT [ppm];#LTy#GT#upointV [mm#upointkV]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01095 = new TH1F("Graph_Graph01095","",100,-36,36);
   Graph_Graph01095->SetMinimum(-29.17818);
   Graph_Graph01095->SetMaximum(46.2996);
   Graph_Graph01095->SetDirectory(0);
   Graph_Graph01095->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01095->SetLineColor(ci);
   Graph_Graph01095->GetXaxis()->SetTitle("Applied #LTB_{r}#GT [ppm]");
   Graph_Graph01095->GetXaxis()->CenterTitle(true);
   Graph_Graph01095->GetXaxis()->SetLabelFont(42);
   Graph_Graph01095->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01095->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01095->GetXaxis()->SetTitleFont(42);
   Graph_Graph01095->GetYaxis()->SetTitle("#LTy#GT#upointV [mm#upointkV]");
   Graph_Graph01095->GetYaxis()->CenterTitle(true);
   Graph_Graph01095->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01095->GetYaxis()->SetLabelFont(42);
   Graph_Graph01095->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01095->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01095->GetYaxis()->SetTitleFont(42);
   Graph_Graph01095->GetZaxis()->SetLabelFont(42);
   Graph_Graph01095->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01095->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01095);
   
   
   TF1 *checkFit1096 = new TF1("checkFit","[0]+[1]*x",-30,30, TF1::EAddToList::kNo);
   checkFit1096->SetFillColor(19);
   checkFit1096->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   checkFit1096->SetLineColor(ci);
   checkFit1096->SetLineWidth(2);
   checkFit1096->SetChisquare(2.316103e-16);
   checkFit1096->SetNDF(0);
   checkFit1096->GetXaxis()->SetLabelFont(42);
   checkFit1096->GetXaxis()->SetTitleOffset(1);
   checkFit1096->GetXaxis()->SetTitleFont(42);
   checkFit1096->GetYaxis()->SetLabelFont(42);
   checkFit1096->GetYaxis()->SetTitleFont(42);
   checkFit1096->SetParameter(0,8.560711);
   checkFit1096->SetParError(0,0.4455533);
   checkFit1096->SetParLimits(0,0,0);
   checkFit1096->SetParameter(1,1.027299);
   checkFit1096->SetParError(1,0.01485178);
   checkFit1096->SetParLimits(1,0,0);
   checkFit1096->SetParent(gre);
   gre->GetListOfFunctions()->Add(checkFit1096);
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.5,0.68,0.6,0.89,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(33);
   pt->SetTextFont(44);
   pt->SetTextSize(26);
   TText *pt_LaTex = pt->AddText("  inf");
   pt_LaTex = pt->AddText("1
#pm0.01
");
   pt_LaTex = pt->AddText("9
#pm0.4
");
   pt_LaTex = pt->AddText("8
#pm0.5
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
   TLine *line = new TLine(-36,0,-8.333222,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(-8.333222,-29.17818,-8.333222,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   
   TF1 *checkFit1097 = new TF1("checkFit","[0]+[1]*x",-30,30, TF1::EAddToList::kNo);
   checkFit1097->SetFillColor(19);
   checkFit1097->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   checkFit1097->SetLineColor(ci);
   checkFit1097->SetLineWidth(2);
   checkFit1097->SetChisquare(2.316103e-16);
   checkFit1097->SetNDF(0);
   checkFit1097->GetXaxis()->SetLabelFont(42);
   checkFit1097->GetXaxis()->SetTitleOffset(1);
   checkFit1097->GetXaxis()->SetTitleFont(42);
   checkFit1097->GetYaxis()->SetLabelFont(42);
   checkFit1097->GetYaxis()->SetTitleFont(42);
   checkFit1097->SetParameter(0,8.560711);
   checkFit1097->SetParError(0,0.4455533);
   checkFit1097->SetParLimits(0,0,0);
   checkFit1097->SetParameter(1,1.027299);
   checkFit1097->SetParError(1,0.01485178);
   checkFit1097->SetParLimits(1,0,0);
   checkFit1097->Draw("same");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
