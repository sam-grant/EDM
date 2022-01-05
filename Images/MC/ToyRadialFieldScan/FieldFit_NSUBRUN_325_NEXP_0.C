void FieldFit_NSUBRUN_325_NEXP_0()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Jan  5 17:07:05 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-45,-46.34478,45,66.60055);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1101[2] = {
   30,
   -30};
   Double_t Graph0_fy1101[2] = {
   47.04688,
   -26.79111};
   Double_t Graph0_fex1101[2] = {
   0,
   0};
   Double_t Graph0_fey1101[2] = {
   0.7294501,
   0.72945};
   TGraphErrors *gre = new TGraphErrors(2,Graph0_fx1101,Graph0_fy1101,Graph0_fex1101,Graph0_fey1101);
   gre->SetName("Graph0");
   gre->SetTitle(";Applied #LTB_{r}#GT [ppm];#LTy#GT#upointV [mm#upointkV]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01101 = new TH1F("Graph_Graph01101","",100,-36,36);
   Graph_Graph01101->SetMinimum(-35.05024);
   Graph_Graph01101->SetMaximum(55.30602);
   Graph_Graph01101->SetDirectory(0);
   Graph_Graph01101->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01101->SetLineColor(ci);
   Graph_Graph01101->GetXaxis()->SetTitle("Applied #LTB_{r}#GT [ppm]");
   Graph_Graph01101->GetXaxis()->CenterTitle(true);
   Graph_Graph01101->GetXaxis()->SetLabelFont(42);
   Graph_Graph01101->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01101->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01101->GetXaxis()->SetTitleFont(42);
   Graph_Graph01101->GetYaxis()->SetTitle("#LTy#GT#upointV [mm#upointkV]");
   Graph_Graph01101->GetYaxis()->CenterTitle(true);
   Graph_Graph01101->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01101->GetYaxis()->SetLabelFont(42);
   Graph_Graph01101->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01101->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01101->GetYaxis()->SetTitleFont(42);
   Graph_Graph01101->GetZaxis()->SetLabelFont(42);
   Graph_Graph01101->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01101->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01101);
   
   
   TF1 *mainFit1102 = new TF1("mainFit","[0]+[1]*x",-30,30, TF1::EAddToList::kNo);
   mainFit1102->SetFillColor(19);
   mainFit1102->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   mainFit1102->SetLineColor(ci);
   mainFit1102->SetLineWidth(2);
   mainFit1102->SetChisquare(1.018145e-11);
   mainFit1102->SetNDF(0);
   mainFit1102->GetXaxis()->SetLabelFont(42);
   mainFit1102->GetXaxis()->SetTitleOffset(1);
   mainFit1102->GetXaxis()->SetTitleFont(42);
   mainFit1102->GetYaxis()->SetLabelFont(42);
   mainFit1102->GetYaxis()->SetTitleFont(42);
   mainFit1102->SetParameter(0,10.12788);
   mainFit1102->SetParError(0,0.5157991);
   mainFit1102->SetParLimits(0,0,0);
   mainFit1102->SetParameter(1,1.230633);
   mainFit1102->SetParError(1,0.0171933);
   mainFit1102->SetParLimits(1,0,0);
   mainFit1102->SetParent(gre);
   gre->GetListOfFunctions()->Add(mainFit1102);
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.5,0.68,0.6,0.89,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(33);
   pt->SetTextFont(44);
   pt->SetTextSize(26);
   TText *pt_LaTex = pt->AddText("  inf");
   pt_LaTex = pt->AddText("1.2
#pm0.02
");
   pt_LaTex = pt->AddText("1e+01
#pm0.5
");
   pt_LaTex = pt->AddText("8
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
   TLine *line = new TLine(-36,0,-8.229817,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(-8.229817,-35.05024,-8.229817,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   
   TF1 *mainFit1103 = new TF1("mainFit","[0]+[1]*x",-30,30, TF1::EAddToList::kNo);
   mainFit1103->SetFillColor(19);
   mainFit1103->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   mainFit1103->SetLineColor(ci);
   mainFit1103->SetLineWidth(2);
   mainFit1103->SetChisquare(1.018145e-11);
   mainFit1103->SetNDF(0);
   mainFit1103->GetXaxis()->SetLabelFont(42);
   mainFit1103->GetXaxis()->SetTitleOffset(1);
   mainFit1103->GetXaxis()->SetTitleFont(42);
   mainFit1103->GetYaxis()->SetLabelFont(42);
   mainFit1103->GetYaxis()->SetTitleFont(42);
   mainFit1103->SetParameter(0,10.12788);
   mainFit1103->SetParError(0,0.5157991);
   mainFit1103->SetParLimits(0,0,0);
   mainFit1103->SetParameter(1,1.230633);
   mainFit1103->SetParError(1,0.0171933);
   mainFit1103->SetParLimits(1,0,0);
   mainFit1103->Draw("same");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
