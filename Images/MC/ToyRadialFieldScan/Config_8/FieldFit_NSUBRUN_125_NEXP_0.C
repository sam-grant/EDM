void FieldFit_NSUBRUN_125_NEXP_0()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Oct 16 07:53:52 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-75,-0.3488504,75,0.2860714);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1067[5] = {
   -50,
   -25,
   0,
   25,
   50};
   Double_t Graph0_fy1067[5] = {
   0.1721326,
   0.0616884,
   -0.05494242,
   -0.1323865,
   -0.2349116};
   Double_t Graph0_fex1067[5] = {
   0,
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1067[5] = {
   0.0081185,
   0.0081185,
   0.0081185,
   0.0081185,
   0.0081185};
   TGraphErrors *gre = new TGraphErrors(5,Graph0_fx1067,Graph0_fy1067,Graph0_fex1067,Graph0_fey1067);
   gre->SetName("Graph0");
   gre->SetTitle("Sub-runs 125");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01067 = new TH1F("Graph_Graph01067","Sub-runs 125",100,-60,60);
   Graph_Graph01067->SetMinimum(-0.2853582);
   Graph_Graph01067->SetMaximum(0.2225792);
   Graph_Graph01067->SetDirectory(0);
   Graph_Graph01067->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01067->SetLineColor(ci);
   Graph_Graph01067->GetXaxis()->SetTitle("Applied B_{r} [ppm]");
   Graph_Graph01067->GetXaxis()->CenterTitle(true);
   Graph_Graph01067->GetXaxis()->SetLabelFont(42);
   Graph_Graph01067->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01067->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01067->GetXaxis()->SetTitleFont(42);
   Graph_Graph01067->GetYaxis()->SetTitle("#LTy#GT / QHV [mm/kV]");
   Graph_Graph01067->GetYaxis()->CenterTitle(true);
   Graph_Graph01067->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01067->GetYaxis()->SetLabelFont(42);
   Graph_Graph01067->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01067->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01067->GetYaxis()->SetTitleFont(42);
   Graph_Graph01067->GetZaxis()->SetLabelFont(42);
   Graph_Graph01067->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01067->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01067);
   
   
   TF1 *mainFit1068 = new TF1("mainFit","[0]+[1]*x",-60,60, TF1::EAddToList::kNo);
   mainFit1068->SetFillColor(19);
   mainFit1068->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   mainFit1068->SetLineColor(ci);
   mainFit1068->SetLineWidth(2);
   mainFit1068->SetChisquare(6.428427);
   mainFit1068->SetNDF(3);
   mainFit1068->GetXaxis()->SetLabelFont(42);
   mainFit1068->GetXaxis()->SetTitleOffset(1);
   mainFit1068->GetXaxis()->SetTitleFont(42);
   mainFit1068->GetYaxis()->SetLabelFont(42);
   mainFit1068->GetYaxis()->SetTitleFont(42);
   mainFit1068->SetParameter(0,-0.03768392);
   mainFit1068->SetParError(0,0.003630704);
   mainFit1068->SetParLimits(0,0,0);
   mainFit1068->SetParameter(1,-0.004032653);
   mainFit1068->SetParError(1,0.0001026918);
   mainFit1068->SetParLimits(1,0,0);
   mainFit1068->SetParent(gre);
   gre->GetListOfFunctions()->Add(mainFit1068);
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.69,0.68,0.89,0.89,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(33);
   pt->SetTextFont(44);
   pt->SetTextSize(26);
   TText *pt_LaTex = pt->AddText(" 2.14");
   pt_LaTex = pt->AddText("#minus0.00403#pm0.000103");
   pt_LaTex = pt->AddText("#minus0.0377#pm0.00363");
   pt_LaTex = pt->AddText("#minus9.34#pm0.931");
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
   TLine *line = new TLine(-60,0,-9.344696,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(-9.344696,-0.2853582,-9.344696,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   
   TF1 *mainFit1069 = new TF1("mainFit","[0]+[1]*x",-60,60, TF1::EAddToList::kNo);
   mainFit1069->SetFillColor(19);
   mainFit1069->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   mainFit1069->SetLineColor(ci);
   mainFit1069->SetLineWidth(2);
   mainFit1069->SetChisquare(6.428427);
   mainFit1069->SetNDF(3);
   mainFit1069->GetXaxis()->SetLabelFont(42);
   mainFit1069->GetXaxis()->SetTitleOffset(1);
   mainFit1069->GetXaxis()->SetTitleFont(42);
   mainFit1069->GetYaxis()->SetLabelFont(42);
   mainFit1069->GetYaxis()->SetTitleFont(42);
   mainFit1069->SetParameter(0,-0.03768392);
   mainFit1069->SetParError(0,0.003630704);
   mainFit1069->SetParLimits(0,0,0);
   mainFit1069->SetParameter(1,-0.004032653);
   mainFit1069->SetParError(1,0.0001026918);
   mainFit1069->SetParLimits(1,0,0);
   mainFit1069->Draw("same");
   
   pt = new TPaveText(0.3750503,0.94,0.6249497,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   pt_LaTex = pt->AddText("Sub-runs 125");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
