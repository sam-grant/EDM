void FieldFitCheck_NSUBRUN_594_NEXP_0()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Jan  5 17:35:41 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-45,-37,45,53);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1071[2] = {
   30,
   -30};
   Double_t Graph0_fy1071[2] = {
   38,
   -22};
   Double_t Graph0_fex1071[2] = {
   0,
   0};
   Double_t Graph0_fey1071[2] = {
   0,
   0};
   TGraphErrors *gre = new TGraphErrors(2,Graph0_fx1071,Graph0_fy1071,Graph0_fex1071,Graph0_fey1071);
   gre->SetName("Graph0");
   gre->SetTitle(";Applied #LTB_{r}#GT [ppm];#LTy#GT#upointV [mm#upointkV]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01071 = new TH1F("Graph_Graph01071","",100,-36,36);
   Graph_Graph01071->SetMinimum(-28);
   Graph_Graph01071->SetMaximum(44);
   Graph_Graph01071->SetDirectory(0);
   Graph_Graph01071->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01071->SetLineColor(ci);
   Graph_Graph01071->GetXaxis()->SetTitle("Applied #LTB_{r}#GT [ppm]");
   Graph_Graph01071->GetXaxis()->CenterTitle(true);
   Graph_Graph01071->GetXaxis()->SetLabelFont(42);
   Graph_Graph01071->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01071->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01071->GetXaxis()->SetTitleFont(42);
   Graph_Graph01071->GetYaxis()->SetTitle("#LTy#GT#upointV [mm#upointkV]");
   Graph_Graph01071->GetYaxis()->CenterTitle(true);
   Graph_Graph01071->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01071->GetYaxis()->SetLabelFont(42);
   Graph_Graph01071->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01071->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01071->GetYaxis()->SetTitleFont(42);
   Graph_Graph01071->GetZaxis()->SetLabelFont(42);
   Graph_Graph01071->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01071->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01071);
   
   
   TF1 *checkFit1072 = new TF1("checkFit","[0]+[1]*x",-30,30, TF1::EAddToList::kNo);
   checkFit1072->SetFillColor(19);
   checkFit1072->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   checkFit1072->SetLineColor(ci);
   checkFit1072->SetLineWidth(2);
   checkFit1072->SetChisquare(3.048279e-18);
   checkFit1072->SetNDF(0);
   checkFit1072->GetXaxis()->SetLabelFont(42);
   checkFit1072->GetXaxis()->SetTitleOffset(1);
   checkFit1072->GetXaxis()->SetTitleFont(42);
   checkFit1072->GetYaxis()->SetLabelFont(42);
   checkFit1072->GetYaxis()->SetTitleFont(42);
   checkFit1072->SetParameter(0,8);
   checkFit1072->SetParError(0,0.7071068);
   checkFit1072->SetParLimits(0,0,0);
   checkFit1072->SetParameter(1,1);
   checkFit1072->SetParError(1,0.02357023);
   checkFit1072->SetParLimits(1,0,0);
   checkFit1072->SetParent(gre);
   gre->GetListOfFunctions()->Add(checkFit1072);
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.5,0.68,0.6,0.89,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(33);
   pt->SetTextFont(44);
   pt->SetTextSize(26);
   TText *pt_LaTex = pt->AddText("1
#pm0.0236
");
   pt_LaTex = pt->AddText("8
#pm0.707
");
   pt_LaTex = pt->AddText("8
#pm0.732
");
   pt->Draw();
   
   pt = new TPaveText(0.11,0.68,0.33,0.89,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(13);
   pt->SetTextFont(44);
   pt->SetTextSize(26);
   pt_LaTex = pt->AddText("Gradient");
   pt_LaTex = pt->AddText("Y-intercept [mm#upointkV]");
   pt_LaTex = pt->AddText("Background #LTB_{r}#GT [ppm]");
   pt->Draw();
   TLine *line = new TLine(-36,0,-8,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(-8,-28,-8,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   
   TF1 *checkFit1073 = new TF1("checkFit","[0]+[1]*x",-30,30, TF1::EAddToList::kNo);
   checkFit1073->SetFillColor(19);
   checkFit1073->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   checkFit1073->SetLineColor(ci);
   checkFit1073->SetLineWidth(2);
   checkFit1073->SetChisquare(3.048279e-18);
   checkFit1073->SetNDF(0);
   checkFit1073->GetXaxis()->SetLabelFont(42);
   checkFit1073->GetXaxis()->SetTitleOffset(1);
   checkFit1073->GetXaxis()->SetTitleFont(42);
   checkFit1073->GetYaxis()->SetLabelFont(42);
   checkFit1073->GetYaxis()->SetTitleFont(42);
   checkFit1073->SetParameter(0,8);
   checkFit1073->SetParError(0,0.7071068);
   checkFit1073->SetParLimits(0,0,0);
   checkFit1073->SetParameter(1,1);
   checkFit1073->SetParError(1,0.02357023);
   checkFit1073->SetParLimits(1,0,0);
   checkFit1073->Draw("same");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
