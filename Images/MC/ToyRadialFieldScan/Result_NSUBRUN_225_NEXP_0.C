void Result_NSUBRUN_225_NEXP_0()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Oct  8 17:32:48 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-45,-0.1527699,45,0.1470042);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1089[4] = {
   -30,
   -10,
   10,
   30};
   Double_t Graph0_fy1089[4] = {
   0.09356676,
   0.03201094,
   -0.02580568,
   -0.0993325};
   Double_t Graph0_fex1089[4] = {
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1089[4] = {
   0.003475053,
   0.003475053,
   0.003475053,
   0.003475053};
   TGraphErrors *gre = new TGraphErrors(4,Graph0_fx1089,Graph0_fy1089,Graph0_fex1089,Graph0_fey1089);
   gre->SetName("Graph0");
   gre->SetTitle("Sub-runs 225");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01089 = new TH1F("Graph_Graph01089","Sub-runs 225",100,-36,36);
   Graph_Graph01089->SetMinimum(-0.1227925);
   Graph_Graph01089->SetMaximum(0.1170267);
   Graph_Graph01089->SetDirectory(0);
   Graph_Graph01089->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01089->SetLineColor(ci);
   Graph_Graph01089->GetXaxis()->SetTitle("Applied B_{r} [ppm]");
   Graph_Graph01089->GetXaxis()->CenterTitle(true);
   Graph_Graph01089->GetXaxis()->SetLabelFont(42);
   Graph_Graph01089->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01089->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01089->GetXaxis()->SetTitleFont(42);
   Graph_Graph01089->GetYaxis()->SetTitle("#LTy#GT / QHV [mm/kV]");
   Graph_Graph01089->GetYaxis()->CenterTitle(true);
   Graph_Graph01089->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01089->GetYaxis()->SetLabelFont(42);
   Graph_Graph01089->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01089->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01089->GetYaxis()->SetTitleFont(42);
   Graph_Graph01089->GetZaxis()->SetLabelFont(42);
   Graph_Graph01089->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01089->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01089);
   
   
   TF1 *fieldLineFit1090 = new TF1("fieldLineFit","pol 1",-36,36, TF1::EAddToList::kNo);
   fieldLineFit1090->SetFillColor(19);
   fieldLineFit1090->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   fieldLineFit1090->SetLineColor(ci);
   fieldLineFit1090->SetLineWidth(2);
   fieldLineFit1090->SetChisquare(4.532975);
   fieldLineFit1090->SetNDF(2);
   fieldLineFit1090->GetXaxis()->SetLabelFont(42);
   fieldLineFit1090->GetXaxis()->SetTitleOffset(1);
   fieldLineFit1090->GetXaxis()->SetTitleFont(42);
   fieldLineFit1090->GetYaxis()->SetLabelFont(42);
   fieldLineFit1090->GetYaxis()->SetTitleFont(42);
   fieldLineFit1090->SetParameter(0,0.0001098789);
   fieldLineFit1090->SetParError(0,0.001737526);
   fieldLineFit1090->SetParLimits(0,0,0);
   fieldLineFit1090->SetParameter(1,-0.003182572);
   fieldLineFit1090->SetParError(1,7.770454e-05);
   fieldLineFit1090->SetParLimits(1,0,0);
   fieldLineFit1090->SetParent(gre);
   gre->GetListOfFunctions()->Add(fieldLineFit1090);
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.69,0.68,0.89,0.89,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(33);
   pt->SetTextFont(44);
   pt->SetTextSize(26);
   TText *pt_LaTex = pt->AddText(" 2.27");
   pt_LaTex = pt->AddText("#minus0.00318#pm7.77e-05");
   pt_LaTex = pt->AddText("0.00011#pm0.00174");
   pt_LaTex = pt->AddText("0.0345#pm0.546");
   pt->Draw();
   
   pt = new TPaveText(0.3,0.69,0.62,0.88,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(13);
   pt->SetTextFont(44);
   pt->SetTextSize(26);
   pt_LaTex = pt->AddText("#chi^{2}/ndf");
   pt_LaTex = pt->AddText("Gradient [mm/kV#upointppm]");
   pt_LaTex = pt->AddText("Y-intercept [mm/kV]");
   pt_LaTex = pt->AddText("Residual B_{r} [ppm]");
   pt->Draw();
   TLine *line = new TLine(-36,0,0.03452525,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(0.03452525,-0.1227925,0.03452525,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   
   TF1 *fieldLineFit1091 = new TF1("fieldLineFit","pol 1",-36,36, TF1::EAddToList::kNo);
   fieldLineFit1091->SetFillColor(19);
   fieldLineFit1091->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   fieldLineFit1091->SetLineColor(ci);
   fieldLineFit1091->SetLineWidth(2);
   fieldLineFit1091->SetChisquare(4.532975);
   fieldLineFit1091->SetNDF(2);
   fieldLineFit1091->GetXaxis()->SetLabelFont(42);
   fieldLineFit1091->GetXaxis()->SetTitleOffset(1);
   fieldLineFit1091->GetXaxis()->SetTitleFont(42);
   fieldLineFit1091->GetYaxis()->SetLabelFont(42);
   fieldLineFit1091->GetYaxis()->SetTitleFont(42);
   fieldLineFit1091->SetParameter(0,0.0001098789);
   fieldLineFit1091->SetParError(0,0.001737526);
   fieldLineFit1091->SetParLimits(0,0,0);
   fieldLineFit1091->SetParameter(1,-0.003182572);
   fieldLineFit1091->SetParError(1,7.770454e-05);
   fieldLineFit1091->SetParLimits(1,0,0);
   fieldLineFit1091->Draw("same");
   
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
