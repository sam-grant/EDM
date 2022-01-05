void FieldFitCheck_NSUBRUN_125_NEXP_0()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Jan  5 17:06:54 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-45,-39.78862,45,55.78433);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1039[2] = {
   30,
   -30};
   Double_t Graph0_fy1039[2] = {
   38.8754,
   -22.87969};
   Double_t Graph0_fex1039[2] = {
   0,
   0};
   Double_t Graph0_fey1039[2] = {
   0.9801097,
   0.9801097};
   TGraphErrors *gre = new TGraphErrors(2,Graph0_fx1039,Graph0_fy1039,Graph0_fex1039,Graph0_fey1039);
   gre->SetName("Graph0");
   gre->SetTitle(";Applied #LTB_{r}#GT [ppm];#LTy#GT#upointV [mm#upointkV]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01039 = new TH1F("Graph_Graph01039","",100,-36,36);
   Graph_Graph01039->SetMinimum(-30.23133);
   Graph_Graph01039->SetMaximum(46.22704);
   Graph_Graph01039->SetDirectory(0);
   Graph_Graph01039->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01039->SetLineColor(ci);
   Graph_Graph01039->GetXaxis()->SetTitle("Applied #LTB_{r}#GT [ppm]");
   Graph_Graph01039->GetXaxis()->CenterTitle(true);
   Graph_Graph01039->GetXaxis()->SetLabelFont(42);
   Graph_Graph01039->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01039->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01039->GetXaxis()->SetTitleFont(42);
   Graph_Graph01039->GetYaxis()->SetTitle("#LTy#GT#upointV [mm#upointkV]");
   Graph_Graph01039->GetYaxis()->CenterTitle(true);
   Graph_Graph01039->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01039->GetYaxis()->SetLabelFont(42);
   Graph_Graph01039->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01039->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01039->GetYaxis()->SetTitleFont(42);
   Graph_Graph01039->GetZaxis()->SetLabelFont(42);
   Graph_Graph01039->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01039->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01039);
   
   
   TF1 *checkFit1040 = new TF1("checkFit","[0]+[1]*x",-30,30, TF1::EAddToList::kNo);
   checkFit1040->SetFillColor(19);
   checkFit1040->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   checkFit1040->SetLineColor(ci);
   checkFit1040->SetLineWidth(2);
   checkFit1040->SetChisquare(9.787794e-18);
   checkFit1040->SetNDF(0);
   checkFit1040->GetXaxis()->SetLabelFont(42);
   checkFit1040->GetXaxis()->SetTitleOffset(1);
   checkFit1040->GetXaxis()->SetTitleFont(42);
   checkFit1040->GetYaxis()->SetLabelFont(42);
   checkFit1040->GetYaxis()->SetTitleFont(42);
   checkFit1040->SetParameter(0,7.997856);
   checkFit1040->SetParError(0,0.6930422);
   checkFit1040->SetParLimits(0,0,0);
   checkFit1040->SetParameter(1,1.029251);
   checkFit1040->SetParError(1,0.02310141);
   checkFit1040->SetParLimits(1,0,0);
   checkFit1040->SetParent(gre);
   gre->GetListOfFunctions()->Add(checkFit1040);
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.5,0.68,0.6,0.89,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(33);
   pt->SetTextFont(44);
   pt->SetTextSize(26);
   TText *pt_LaTex = pt->AddText("  inf");
   pt_LaTex = pt->AddText("1
#pm0.02
");
   pt_LaTex = pt->AddText("8
#pm0.7
");
   pt_LaTex = pt->AddText("8
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
   TLine *line = new TLine(-36,0,-7.770557,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(-7.770557,-30.23133,-7.770557,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   
   TF1 *checkFit1041 = new TF1("checkFit","[0]+[1]*x",-30,30, TF1::EAddToList::kNo);
   checkFit1041->SetFillColor(19);
   checkFit1041->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   checkFit1041->SetLineColor(ci);
   checkFit1041->SetLineWidth(2);
   checkFit1041->SetChisquare(9.787794e-18);
   checkFit1041->SetNDF(0);
   checkFit1041->GetXaxis()->SetLabelFont(42);
   checkFit1041->GetXaxis()->SetTitleOffset(1);
   checkFit1041->GetXaxis()->SetTitleFont(42);
   checkFit1041->GetYaxis()->SetLabelFont(42);
   checkFit1041->GetYaxis()->SetTitleFont(42);
   checkFit1041->SetParameter(0,7.997856);
   checkFit1041->SetParError(0,0.6930422);
   checkFit1041->SetParLimits(0,0,0);
   checkFit1041->SetParameter(1,1.029251);
   checkFit1041->SetParError(1,0.02310141);
   checkFit1041->SetParLimits(1,0,0);
   checkFit1041->Draw("same");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
