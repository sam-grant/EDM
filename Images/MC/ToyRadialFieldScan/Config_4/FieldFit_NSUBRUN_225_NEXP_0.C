void FieldFit_NSUBRUN_225_NEXP_0()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Oct 16 07:51:04 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-75,-0.315911,75,0.2574232);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1123[5] = {
   -50,
   -25,
   0,
   25,
   50};
   Double_t Graph0_fy1123[5] = {
   0.1583924,
   0.06479485,
   -0.0303197,
   -0.1250294,
   -0.2168802};
   Double_t Graph0_fex1123[5] = {
   0,
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1123[5] = {
   0.003475053,
   0.003475053,
   0.003475053,
   0.003475053,
   0.003475053};
   TGraphErrors *gre = new TGraphErrors(5,Graph0_fx1123,Graph0_fy1123,Graph0_fex1123,Graph0_fey1123);
   gre->SetName("Graph0");
   gre->SetTitle("Sub-runs 225");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01123 = new TH1F("Graph_Graph01123","Sub-runs 225",100,-60,60);
   Graph_Graph01123->SetMinimum(-0.2585776);
   Graph_Graph01123->SetMaximum(0.2000898);
   Graph_Graph01123->SetDirectory(0);
   Graph_Graph01123->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01123->SetLineColor(ci);
   Graph_Graph01123->GetXaxis()->SetTitle("Applied B_{r} [ppm]");
   Graph_Graph01123->GetXaxis()->CenterTitle(true);
   Graph_Graph01123->GetXaxis()->SetLabelFont(42);
   Graph_Graph01123->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01123->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01123->GetXaxis()->SetTitleFont(42);
   Graph_Graph01123->GetYaxis()->SetTitle("#LTy#GT / QHV [mm/kV]");
   Graph_Graph01123->GetYaxis()->CenterTitle(true);
   Graph_Graph01123->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01123->GetYaxis()->SetLabelFont(42);
   Graph_Graph01123->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01123->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01123->GetYaxis()->SetTitleFont(42);
   Graph_Graph01123->GetZaxis()->SetLabelFont(42);
   Graph_Graph01123->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01123->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01123);
   
   
   TF1 *mainFit1124 = new TF1("mainFit","[0]+[1]*x",-60,60, TF1::EAddToList::kNo);
   mainFit1124->SetFillColor(19);
   mainFit1124->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   mainFit1124->SetLineColor(ci);
   mainFit1124->SetLineWidth(2);
   mainFit1124->SetChisquare(0.2487934);
   mainFit1124->SetNDF(3);
   mainFit1124->GetXaxis()->SetLabelFont(42);
   mainFit1124->GetXaxis()->SetTitleOffset(1);
   mainFit1124->GetXaxis()->SetTitleFont(42);
   mainFit1124->GetYaxis()->SetLabelFont(42);
   mainFit1124->GetYaxis()->SetTitleFont(42);
   mainFit1124->SetParameter(0,-0.02980842);
   mainFit1124->SetParError(0,0.001554091);
   mainFit1124->SetParLimits(0,0,0);
   mainFit1124->SetParameter(1,-0.003761479);
   mainFit1124->SetParError(1,4.395632e-05);
   mainFit1124->SetParLimits(1,0,0);
   mainFit1124->SetParent(gre);
   gre->GetListOfFunctions()->Add(mainFit1124);
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.69,0.68,0.89,0.89,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(33);
   pt->SetTextFont(44);
   pt->SetTextSize(26);
   TText *pt_LaTex = pt->AddText("0.0829");
   pt_LaTex = pt->AddText("#minus0.00376#pm4.4e-05");
   pt_LaTex = pt->AddText("#minus0.0298#pm0.00155");
   pt_LaTex = pt->AddText("#minus7.92#pm0.423");
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
   TLine *line = new TLine(-60,0,-7.924654,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(-7.924654,-0.2585776,-7.924654,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   
   TF1 *mainFit1125 = new TF1("mainFit","[0]+[1]*x",-60,60, TF1::EAddToList::kNo);
   mainFit1125->SetFillColor(19);
   mainFit1125->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   mainFit1125->SetLineColor(ci);
   mainFit1125->SetLineWidth(2);
   mainFit1125->SetChisquare(0.2487934);
   mainFit1125->SetNDF(3);
   mainFit1125->GetXaxis()->SetLabelFont(42);
   mainFit1125->GetXaxis()->SetTitleOffset(1);
   mainFit1125->GetXaxis()->SetTitleFont(42);
   mainFit1125->GetYaxis()->SetLabelFont(42);
   mainFit1125->GetYaxis()->SetTitleFont(42);
   mainFit1125->SetParameter(0,-0.02980842);
   mainFit1125->SetParError(0,0.001554091);
   mainFit1125->SetParLimits(0,0,0);
   mainFit1125->SetParameter(1,-0.003761479);
   mainFit1125->SetParError(1,4.395632e-05);
   mainFit1125->SetParLimits(1,0,0);
   mainFit1125->Draw("same");
   
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
