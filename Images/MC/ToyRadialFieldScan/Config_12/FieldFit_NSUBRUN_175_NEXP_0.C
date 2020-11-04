void FieldFit_NSUBRUN_175_NEXP_0()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Oct 16 07:57:17 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-75,-0.3197122,75,0.2679093);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1095[5] = {
   -50,
   -25,
   0,
   25,
   50};
   Double_t Graph0_fy1095[5] = {
   0.1660341,
   0.05689025,
   -0.03140033,
   -0.1242426,
   -0.2178322};
   Double_t Graph0_fex1095[5] = {
   0,
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1095[5] = {
   0.003938196,
   0.003942761,
   0.003942762,
   0.00394275,
   0.003943052};
   TGraphErrors *gre = new TGraphErrors(5,Graph0_fx1095,Graph0_fy1095,Graph0_fex1095,Graph0_fey1095);
   gre->SetName("Graph0");
   gre->SetTitle("Sub-runs 175");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01095 = new TH1F("Graph_Graph01095","Sub-runs 175",100,-60,60);
   Graph_Graph01095->SetMinimum(-0.2609501);
   Graph_Graph01095->SetMaximum(0.2091471);
   Graph_Graph01095->SetDirectory(0);
   Graph_Graph01095->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01095->SetLineColor(ci);
   Graph_Graph01095->GetXaxis()->SetTitle("Applied B_{r} [ppm]");
   Graph_Graph01095->GetXaxis()->CenterTitle(true);
   Graph_Graph01095->GetXaxis()->SetLabelFont(42);
   Graph_Graph01095->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01095->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01095->GetXaxis()->SetTitleFont(42);
   Graph_Graph01095->GetYaxis()->SetTitle("#LTy#GT / QHV [mm/kV]");
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
   
   
   TF1 *mainFit1096 = new TF1("mainFit","[0]+[1]*x",-60,60, TF1::EAddToList::kNo);
   mainFit1096->SetFillColor(19);
   mainFit1096->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   mainFit1096->SetLineColor(ci);
   mainFit1096->SetLineWidth(2);
   mainFit1096->SetChisquare(7.032112);
   mainFit1096->SetNDF(3);
   mainFit1096->GetXaxis()->SetLabelFont(42);
   mainFit1096->GetXaxis()->SetTitleOffset(1);
   mainFit1096->GetXaxis()->SetTitleFont(42);
   mainFit1096->GetYaxis()->SetLabelFont(42);
   mainFit1096->GetYaxis()->SetTitleFont(42);
   mainFit1096->SetParameter(0,-0.03010729);
   mainFit1096->SetParError(0,0.001762873);
   mainFit1096->SetParLimits(0,0,0);
   mainFit1096->SetParameter(1,-0.003795583);
   mainFit1096->SetParError(1,4.985077e-05);
   mainFit1096->SetParLimits(1,0,0);
   mainFit1096->SetParent(gre);
   gre->GetListOfFunctions()->Add(mainFit1096);
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.69,0.68,0.89,0.89,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(33);
   pt->SetTextFont(44);
   pt->SetTextSize(26);
   TText *pt_LaTex = pt->AddText(" 2.34");
   pt_LaTex = pt->AddText("#minus0.0038#pm4.99e-05");
   pt_LaTex = pt->AddText("#minus0.0301#pm0.00176");
   pt_LaTex = pt->AddText("#minus7.93#pm0.476");
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
   TLine *line = new TLine(-60,0,-7.932191,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(-7.932191,-0.2609501,-7.932191,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   
   TF1 *mainFit1097 = new TF1("mainFit","[0]+[1]*x",-60,60, TF1::EAddToList::kNo);
   mainFit1097->SetFillColor(19);
   mainFit1097->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   mainFit1097->SetLineColor(ci);
   mainFit1097->SetLineWidth(2);
   mainFit1097->SetChisquare(7.032112);
   mainFit1097->SetNDF(3);
   mainFit1097->GetXaxis()->SetLabelFont(42);
   mainFit1097->GetXaxis()->SetTitleOffset(1);
   mainFit1097->GetXaxis()->SetTitleFont(42);
   mainFit1097->GetYaxis()->SetLabelFont(42);
   mainFit1097->GetYaxis()->SetTitleFont(42);
   mainFit1097->SetParameter(0,-0.03010729);
   mainFit1097->SetParError(0,0.001762873);
   mainFit1097->SetParLimits(0,0,0);
   mainFit1097->SetParameter(1,-0.003795583);
   mainFit1097->SetParError(1,4.985077e-05);
   mainFit1097->SetParLimits(1,0,0);
   mainFit1097->Draw("same");
   
   pt = new TPaveText(0.3750503,0.94,0.6249497,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   pt_LaTex = pt->AddText("Sub-runs 175");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
