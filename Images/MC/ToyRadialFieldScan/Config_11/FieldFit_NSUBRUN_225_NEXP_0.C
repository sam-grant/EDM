void FieldFit_NSUBRUN_225_NEXP_0()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Oct 16 07:56:26 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-75,-0.3135652,75,0.2498156);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1069[2] = {
   -50,
   50};
   Double_t Graph0_fy1069[2] = {
   0.1524437,
   -0.2161934};
   Double_t Graph0_fex1069[2] = {
   0,
   0};
   Double_t Graph0_fey1069[2] = {
   0.003475052,
   0.00347505};
   TGraphErrors *gre = new TGraphErrors(2,Graph0_fx1069,Graph0_fy1069,Graph0_fex1069,Graph0_fey1069);
   gre->SetName("Graph0");
   gre->SetTitle("Sub-runs 225");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01069 = new TH1F("Graph_Graph01069","Sub-runs 225",100,-60,60);
   Graph_Graph01069->SetMinimum(-0.2572271);
   Graph_Graph01069->SetMaximum(0.1934775);
   Graph_Graph01069->SetDirectory(0);
   Graph_Graph01069->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01069->SetLineColor(ci);
   Graph_Graph01069->GetXaxis()->SetTitle("Applied B_{r} [ppm]");
   Graph_Graph01069->GetXaxis()->CenterTitle(true);
   Graph_Graph01069->GetXaxis()->SetLabelFont(42);
   Graph_Graph01069->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01069->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01069->GetXaxis()->SetTitleFont(42);
   Graph_Graph01069->GetYaxis()->SetTitle("#LTy#GT / QHV [mm/kV]");
   Graph_Graph01069->GetYaxis()->CenterTitle(true);
   Graph_Graph01069->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01069->GetYaxis()->SetLabelFont(42);
   Graph_Graph01069->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01069->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01069->GetYaxis()->SetTitleFont(42);
   Graph_Graph01069->GetZaxis()->SetLabelFont(42);
   Graph_Graph01069->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01069->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01069);
   
   
   TF1 *mainFit1070 = new TF1("mainFit","[0]+[1]*x",-60,60, TF1::EAddToList::kNo);
   mainFit1070->SetFillColor(19);
   mainFit1070->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   mainFit1070->SetLineColor(ci);
   mainFit1070->SetLineWidth(2);
   mainFit1070->SetChisquare(2.202493e-09);
   mainFit1070->SetNDF(0);
   mainFit1070->GetXaxis()->SetLabelFont(42);
   mainFit1070->GetXaxis()->SetTitleOffset(1);
   mainFit1070->GetXaxis()->SetTitleFont(42);
   mainFit1070->GetYaxis()->SetLabelFont(42);
   mainFit1070->GetYaxis()->SetTitleFont(42);
   mainFit1070->SetParameter(0,-0.03187494);
   mainFit1070->SetParError(0,0.002457232);
   mainFit1070->SetParLimits(0,0,0);
   mainFit1070->SetParameter(1,-0.003686371);
   mainFit1070->SetParError(1,4.914465e-05);
   mainFit1070->SetParLimits(1,0,0);
   mainFit1070->SetParent(gre);
   gre->GetListOfFunctions()->Add(mainFit1070);
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.69,0.68,0.89,0.89,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(33);
   pt->SetTextFont(44);
   pt->SetTextSize(26);
   TText *pt_LaTex = pt->AddText("  inf");
   pt_LaTex = pt->AddText("#minus0.00369#pm4.91e-05");
   pt_LaTex = pt->AddText("#minus0.0319#pm0.00246");
   pt_LaTex = pt->AddText("#minus8.65#pm0.676");
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
   TLine *line = new TLine(-60,0,-8.646699,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(-8.646699,-0.2572271,-8.646699,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   
   TF1 *mainFit1071 = new TF1("mainFit","[0]+[1]*x",-60,60, TF1::EAddToList::kNo);
   mainFit1071->SetFillColor(19);
   mainFit1071->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   mainFit1071->SetLineColor(ci);
   mainFit1071->SetLineWidth(2);
   mainFit1071->SetChisquare(2.202493e-09);
   mainFit1071->SetNDF(0);
   mainFit1071->GetXaxis()->SetLabelFont(42);
   mainFit1071->GetXaxis()->SetTitleOffset(1);
   mainFit1071->GetXaxis()->SetTitleFont(42);
   mainFit1071->GetYaxis()->SetLabelFont(42);
   mainFit1071->GetYaxis()->SetTitleFont(42);
   mainFit1071->SetParameter(0,-0.03187494);
   mainFit1071->SetParError(0,0.002457232);
   mainFit1071->SetParLimits(0,0,0);
   mainFit1071->SetParameter(1,-0.003686371);
   mainFit1071->SetParError(1,4.914465e-05);
   mainFit1071->SetParLimits(1,0,0);
   mainFit1071->Draw("same");
   
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
