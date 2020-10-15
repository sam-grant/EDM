void FieldFit_NSUBRUN_225_NEXP_0()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Oct 15 00:42:41 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-75,-0.3256243,75,0.2569512);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1231[11] = {
   -50,
   -40,
   -30,
   -20,
   -10,
   0,
   10,
   20,
   30,
   40,
   50};
   Double_t Graph0_fy1231[11] = {
   0.1563801,
   0.1241457,
   0.08566482,
   0.04131689,
   0.003079074,
   -0.03025547,
   -0.06934686,
   -0.10577,
   -0.141528,
   -0.172464,
   -0.2250534};
   Double_t Graph0_fex1231[11] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1231[11] = {
   0.003475223,
   0.003474998,
   0.003474976,
   0.003474983,
   0.003475071,
   0.00347499,
   0.003475051,
   0.003475051,
   0.003474984,
   0.003475053,
   0.0034749};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1231,Graph0_fy1231,Graph0_fex1231,Graph0_fey1231);
   gre->SetName("Graph0");
   gre->SetTitle("Sub-runs 225");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01231 = new TH1F("Graph_Graph01231","Sub-runs 225",100,-60,60);
   Graph_Graph01231->SetMinimum(-0.2673667);
   Graph_Graph01231->SetMaximum(0.1986937);
   Graph_Graph01231->SetDirectory(0);
   Graph_Graph01231->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01231->SetLineColor(ci);
   Graph_Graph01231->GetXaxis()->SetTitle("Applied B_{r} [ppm]");
   Graph_Graph01231->GetXaxis()->CenterTitle(true);
   Graph_Graph01231->GetXaxis()->SetLabelFont(42);
   Graph_Graph01231->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01231->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01231->GetXaxis()->SetTitleFont(42);
   Graph_Graph01231->GetYaxis()->SetTitle("#LTy#GT / QHV [mm/kV]");
   Graph_Graph01231->GetYaxis()->CenterTitle(true);
   Graph_Graph01231->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01231->GetYaxis()->SetLabelFont(42);
   Graph_Graph01231->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01231->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01231->GetYaxis()->SetTitleFont(42);
   Graph_Graph01231->GetZaxis()->SetLabelFont(42);
   Graph_Graph01231->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01231->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01231);
   
   
   TF1 *mainFit1232 = new TF1("mainFit","[0]+[1]*x",-60,60, TF1::EAddToList::kNo);
   mainFit1232->SetFillColor(19);
   mainFit1232->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   mainFit1232->SetLineColor(ci);
   mainFit1232->SetLineWidth(2);
   mainFit1232->SetChisquare(14.61874);
   mainFit1232->SetNDF(9);
   mainFit1232->GetXaxis()->SetLabelFont(42);
   mainFit1232->GetXaxis()->SetTitleOffset(1);
   mainFit1232->GetXaxis()->SetTitleFont(42);
   mainFit1232->GetYaxis()->SetLabelFont(42);
   mainFit1232->GetYaxis()->SetTitleFont(42);
   mainFit1232->SetParameter(0,-0.03034832);
   mainFit1232->SetParError(0,0.00104776);
   mainFit1232->SetParLimits(0,0,0);
   mainFit1232->SetParameter(1,-0.003765262);
   mainFit1232->SetParError(1,3.313315e-05);
   mainFit1232->SetParLimits(1,0,0);
   mainFit1232->SetParent(gre);
   gre->GetListOfFunctions()->Add(mainFit1232);
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.69,0.68,0.89,0.89,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(33);
   pt->SetTextFont(44);
   pt->SetTextSize(26);
   TText *pt_LaTex = pt->AddText(" 1.62");
   pt_LaTex = pt->AddText("#minus0.00377#pm3.31e-05");
   pt_LaTex = pt->AddText("#minus0.0303#pm0.00105");
   pt_LaTex = pt->AddText("#minus8.06#pm0.287");
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
   TLine *line = new TLine(-60,0,-8.06008,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(-8.06008,-0.2673667,-8.06008,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   
   TF1 *mainFit1233 = new TF1("mainFit","[0]+[1]*x",-60,60, TF1::EAddToList::kNo);
   mainFit1233->SetFillColor(19);
   mainFit1233->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   mainFit1233->SetLineColor(ci);
   mainFit1233->SetLineWidth(2);
   mainFit1233->SetChisquare(14.61874);
   mainFit1233->SetNDF(9);
   mainFit1233->GetXaxis()->SetLabelFont(42);
   mainFit1233->GetXaxis()->SetTitleOffset(1);
   mainFit1233->GetXaxis()->SetTitleFont(42);
   mainFit1233->GetYaxis()->SetLabelFont(42);
   mainFit1233->GetYaxis()->SetTitleFont(42);
   mainFit1233->SetParameter(0,-0.03034832);
   mainFit1233->SetParError(0,0.00104776);
   mainFit1233->SetParLimits(0,0,0);
   mainFit1233->SetParameter(1,-0.003765262);
   mainFit1233->SetParError(1,3.313315e-05);
   mainFit1233->SetParLimits(1,0,0);
   mainFit1233->Draw("same");
   
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
