void FieldFit_NSUBRUN_325_NEXP_0()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Dec  8 12:25:49 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-45,-44.0458,45,64.30157);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1101[2] = {
   -30,
   30};
   Double_t Graph0_fy1101[2] = {
   -25.25845,
   45.51423};
   Double_t Graph0_fex1101[2] = {
   0,
   0};
   Double_t Graph0_fey1101[2] = {
   0.72945,
   0.72945};
   TGraphErrors *gre = new TGraphErrors(2,Graph0_fx1101,Graph0_fy1101,Graph0_fex1101,Graph0_fey1101);
   gre->SetName("Graph0");
   gre->SetTitle("325 sub-runs");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01101 = new TH1F("Graph_Graph01101","325 sub-runs",100,-36,36);
   Graph_Graph01101->SetMinimum(-33.21106);
   Graph_Graph01101->SetMaximum(53.46684);
   Graph_Graph01101->SetDirectory(0);
   Graph_Graph01101->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01101->SetLineColor(ci);
   Graph_Graph01101->GetXaxis()->SetTitle("#LTB_{r}^{App}#GT [ppm]");
   Graph_Graph01101->GetXaxis()->CenterTitle(true);
   Graph_Graph01101->GetXaxis()->SetLabelFont(42);
   Graph_Graph01101->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01101->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01101->GetXaxis()->SetTitleFont(42);
   Graph_Graph01101->GetYaxis()->SetTitle("#LTy#GT QHV [mm#upointkV]");
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
   
   
   TF1 *mainFit1102 = new TF1("mainFit","[0]+[1]*x",-36,36, TF1::EAddToList::kNo);
   mainFit1102->SetFillColor(19);
   mainFit1102->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   mainFit1102->SetLineColor(ci);
   mainFit1102->SetLineWidth(2);
   mainFit1102->SetChisquare(8.807432e-13);
   mainFit1102->SetNDF(0);
   mainFit1102->GetXaxis()->SetLabelFont(42);
   mainFit1102->GetXaxis()->SetTitleOffset(1);
   mainFit1102->GetXaxis()->SetTitleFont(42);
   mainFit1102->GetYaxis()->SetLabelFont(42);
   mainFit1102->GetYaxis()->SetTitleFont(42);
   mainFit1102->SetParameter(0,10.12789);
   mainFit1102->SetParError(0,0.5157991);
   mainFit1102->SetParLimits(0,0,0);
   mainFit1102->SetParameter(1,1.179545);
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
   pt_LaTex = pt->AddText(" 1.18#pm0.0172");
   pt_LaTex = pt->AddText(" 10.1#pm0.516");
   pt_LaTex = pt->AddText(" 8.59#pm0.455");
   pt->Draw();
   
   pt = new TPaveText(0.11,0.68,0.33,0.89,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(13);
   pt->SetTextFont(44);
   pt->SetTextSize(26);
   pt_LaTex = pt->AddText("#chi^{2}/ndf");
   pt_LaTex = pt->AddText("Gradient");
   pt_LaTex = pt->AddText("Y-intercept [mm/kV]");
   pt_LaTex = pt->AddText("#LTB_{r}^{Bkg}#GT [ppm]");
   pt->Draw();
   TLine *line = new TLine(-36,0,-8.586267,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(-8.586267,-33.21106,-8.586267,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   
   TF1 *mainFit1103 = new TF1("mainFit","[0]+[1]*x",-36,36, TF1::EAddToList::kNo);
   mainFit1103->SetFillColor(19);
   mainFit1103->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   mainFit1103->SetLineColor(ci);
   mainFit1103->SetLineWidth(2);
   mainFit1103->SetChisquare(8.807432e-13);
   mainFit1103->SetNDF(0);
   mainFit1103->GetXaxis()->SetLabelFont(42);
   mainFit1103->GetXaxis()->SetTitleOffset(1);
   mainFit1103->GetXaxis()->SetTitleFont(42);
   mainFit1103->GetYaxis()->SetLabelFont(42);
   mainFit1103->GetYaxis()->SetTitleFont(42);
   mainFit1103->SetParameter(0,10.12789);
   mainFit1103->SetParError(0,0.5157991);
   mainFit1103->SetParLimits(0,0,0);
   mainFit1103->SetParameter(1,1.179545);
   mainFit1103->SetParError(1,0.0171933);
   mainFit1103->SetParLimits(1,0,0);
   mainFit1103->Draw("same");
   
   pt = new TPaveText(0.3769347,0.94,0.6230653,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   pt_LaTex = pt->AddText("325 sub-runs");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
