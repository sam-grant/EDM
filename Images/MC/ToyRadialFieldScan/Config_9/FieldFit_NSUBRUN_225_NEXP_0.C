void FieldFit_NSUBRUN_225_NEXP_0()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Oct 16 07:54:44 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-45,-0.2050133,45,0.1461813);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1087[3] = {
   -30,
   30,
   0};
   Double_t Graph0_fy1087[3] = {
   0.08417383,
   -0.1430058,
   -0.02674547};
   Double_t Graph0_fex1087[3] = {
   0,
   0,
   0};
   Double_t Graph0_fey1087[3] = {
   0.003475013,
   0.003475035,
   0.003475174};
   TGraphErrors *gre = new TGraphErrors(3,Graph0_fx1087,Graph0_fy1087,Graph0_fex1087,Graph0_fey1087);
   gre->SetName("Graph0");
   gre->SetTitle("Sub-runs 225");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01087 = new TH1F("Graph_Graph01087","Sub-runs 225",100,-36,36);
   Graph_Graph01087->SetMinimum(-0.1698939);
   Graph_Graph01087->SetMaximum(0.1110618);
   Graph_Graph01087->SetDirectory(0);
   Graph_Graph01087->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01087->SetLineColor(ci);
   Graph_Graph01087->GetXaxis()->SetTitle("Applied B_{r} [ppm]");
   Graph_Graph01087->GetXaxis()->CenterTitle(true);
   Graph_Graph01087->GetXaxis()->SetLabelFont(42);
   Graph_Graph01087->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01087->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01087->GetXaxis()->SetTitleFont(42);
   Graph_Graph01087->GetYaxis()->SetTitle("#LTy#GT / QHV [mm/kV]");
   Graph_Graph01087->GetYaxis()->CenterTitle(true);
   Graph_Graph01087->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01087->GetYaxis()->SetLabelFont(42);
   Graph_Graph01087->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01087->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01087->GetYaxis()->SetTitleFont(42);
   Graph_Graph01087->GetZaxis()->SetLabelFont(42);
   Graph_Graph01087->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01087->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01087);
   
   
   TF1 *mainFit1088 = new TF1("mainFit","[0]+[1]*x",-36,36, TF1::EAddToList::kNo);
   mainFit1088->SetFillColor(19);
   mainFit1088->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   mainFit1088->SetLineColor(ci);
   mainFit1088->SetLineWidth(2);
   mainFit1088->SetChisquare(0.3937019);
   mainFit1088->SetNDF(1);
   mainFit1088->GetXaxis()->SetLabelFont(42);
   mainFit1088->GetXaxis()->SetTitleOffset(1);
   mainFit1088->GetXaxis()->SetTitleFont(42);
   mainFit1088->GetYaxis()->SetLabelFont(42);
   mainFit1088->GetYaxis()->SetTitleFont(42);
   mainFit1088->SetParameter(0,-0.0285254);
   mainFit1088->SetParError(0,0.002006335);
   mainFit1088->SetParLimits(0,0,0);
   mainFit1088->SetParameter(1,-0.003786322);
   mainFit1088->SetParError(1,8.19071e-05);
   mainFit1088->SetParLimits(1,0,0);
   mainFit1088->SetParent(gre);
   gre->GetListOfFunctions()->Add(mainFit1088);
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.69,0.68,0.89,0.89,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(33);
   pt->SetTextFont(44);
   pt->SetTextSize(26);
   TText *pt_LaTex = pt->AddText("0.394");
   pt_LaTex = pt->AddText("#minus0.00379#pm8.19e-05");
   pt_LaTex = pt->AddText("#minus0.0285#pm0.00201");
   pt_LaTex = pt->AddText("#minus7.53#pm0.554");
   pt->Draw();
   
   pt = new TPaveText(0.3,0.69,0.62,0.88,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(13);
   pt->SetTextFont(44);
   pt->SetTextSize(26);
   pt_LaTex = pt->AddText("#chi^{2}/ndf");
   pt_LaTex = pt->AddText("Gradient [mm/kV#upointppm]");
   pt_LaTex = pt->AddText("Y-intercept [mm/kV]");
   pt_LaTex = pt->AddText("Background B_{r} [ppm]");
   pt->Draw();
   TLine *line = new TLine(-36,0,-7.533803,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(-7.533803,-0.1698939,-7.533803,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   
   TF1 *mainFit1089 = new TF1("mainFit","[0]+[1]*x",-36,36, TF1::EAddToList::kNo);
   mainFit1089->SetFillColor(19);
   mainFit1089->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   mainFit1089->SetLineColor(ci);
   mainFit1089->SetLineWidth(2);
   mainFit1089->SetChisquare(0.3937019);
   mainFit1089->SetNDF(1);
   mainFit1089->GetXaxis()->SetLabelFont(42);
   mainFit1089->GetXaxis()->SetTitleOffset(1);
   mainFit1089->GetXaxis()->SetTitleFont(42);
   mainFit1089->GetYaxis()->SetLabelFont(42);
   mainFit1089->GetYaxis()->SetTitleFont(42);
   mainFit1089->SetParameter(0,-0.0285254);
   mainFit1089->SetParError(0,0.002006335);
   mainFit1089->SetParLimits(0,0,0);
   mainFit1089->SetParameter(1,-0.003786322);
   mainFit1089->SetParError(1,8.19071e-05);
   mainFit1089->SetParLimits(1,0,0);
   mainFit1089->Draw("same");
   
   pt = new TPaveText(0.3750503,0.94,0.6249497,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   pt_LaTex = pt->AddText("Sub-runs 225");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
