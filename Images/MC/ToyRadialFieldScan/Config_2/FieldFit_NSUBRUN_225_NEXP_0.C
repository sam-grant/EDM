void FieldFit_NSUBRUN_225_NEXP_0()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Oct 16 07:49:30 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-45,-0.2132292,45,0.1429986);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1105[4] = {
   -30,
   -10,
   10,
   30};
   Double_t Graph0_fy1105[4] = {
   0.08015226,
   0.0115517,
   -0.07385574,
   -0.1503828};
   Double_t Graph0_fex1105[4] = {
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1105[4] = {
   0.003475053,
   0.003475053,
   0.003475053,
   0.003475053};
   TGraphErrors *gre = new TGraphErrors(4,Graph0_fx1105,Graph0_fy1105,Graph0_fex1105,Graph0_fey1105);
   gre->SetName("Graph0");
   gre->SetTitle("Sub-runs 225");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01105 = new TH1F("Graph_Graph01105","Sub-runs 225",100,-36,36);
   Graph_Graph01105->SetMinimum(-0.1776064);
   Graph_Graph01105->SetMaximum(0.1073758);
   Graph_Graph01105->SetDirectory(0);
   Graph_Graph01105->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01105->SetLineColor(ci);
   Graph_Graph01105->GetXaxis()->SetTitle("Applied B_{r} [ppm]");
   Graph_Graph01105->GetXaxis()->CenterTitle(true);
   Graph_Graph01105->GetXaxis()->SetLabelFont(42);
   Graph_Graph01105->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01105->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01105->GetXaxis()->SetTitleFont(42);
   Graph_Graph01105->GetYaxis()->SetTitle("#LTy#GT / QHV [mm/kV]");
   Graph_Graph01105->GetYaxis()->CenterTitle(true);
   Graph_Graph01105->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01105->GetYaxis()->SetLabelFont(42);
   Graph_Graph01105->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01105->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01105->GetYaxis()->SetTitleFont(42);
   Graph_Graph01105->GetZaxis()->SetLabelFont(42);
   Graph_Graph01105->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01105->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01105);
   
   
   TF1 *mainFit1106 = new TF1("mainFit","[0]+[1]*x",-36,36, TF1::EAddToList::kNo);
   mainFit1106->SetFillColor(19);
   mainFit1106->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   mainFit1106->SetLineColor(ci);
   mainFit1106->SetLineWidth(2);
   mainFit1106->SetChisquare(4.03272);
   mainFit1106->SetNDF(2);
   mainFit1106->GetXaxis()->SetLabelFont(42);
   mainFit1106->GetXaxis()->SetTitleOffset(1);
   mainFit1106->GetXaxis()->SetTitleFont(42);
   mainFit1106->GetYaxis()->SetLabelFont(42);
   mainFit1106->GetYaxis()->SetTitleFont(42);
   mainFit1106->SetParameter(0,-0.03313365);
   mainFit1106->SetParError(0,0.001737526);
   mainFit1106->SetParLimits(0,0,0);
   mainFit1106->SetParameter(1,-0.003885063);
   mainFit1106->SetParError(1,7.770454e-05);
   mainFit1106->SetParLimits(1,0,0);
   mainFit1106->SetParent(gre);
   gre->GetListOfFunctions()->Add(mainFit1106);
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.69,0.68,0.89,0.89,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(33);
   pt->SetTextFont(44);
   pt->SetTextSize(26);
   TText *pt_LaTex = pt->AddText(" 2.02");
   pt_LaTex = pt->AddText("#minus0.00389#pm7.77e-05");
   pt_LaTex = pt->AddText("#minus0.0331#pm0.00174");
   pt_LaTex = pt->AddText("#minus8.53#pm0.479");
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
   TLine *line = new TLine(-36,0,-8.52847,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(-8.52847,-0.1776064,-8.52847,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   
   TF1 *mainFit1107 = new TF1("mainFit","[0]+[1]*x",-36,36, TF1::EAddToList::kNo);
   mainFit1107->SetFillColor(19);
   mainFit1107->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   mainFit1107->SetLineColor(ci);
   mainFit1107->SetLineWidth(2);
   mainFit1107->SetChisquare(4.03272);
   mainFit1107->SetNDF(2);
   mainFit1107->GetXaxis()->SetLabelFont(42);
   mainFit1107->GetXaxis()->SetTitleOffset(1);
   mainFit1107->GetXaxis()->SetTitleFont(42);
   mainFit1107->GetYaxis()->SetLabelFont(42);
   mainFit1107->GetYaxis()->SetTitleFont(42);
   mainFit1107->SetParameter(0,-0.03313365);
   mainFit1107->SetParError(0,0.001737526);
   mainFit1107->SetParLimits(0,0,0);
   mainFit1107->SetParameter(1,-0.003885063);
   mainFit1107->SetParError(1,7.770454e-05);
   mainFit1107->SetParLimits(1,0,0);
   mainFit1107->Draw("same");
   
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
