void FieldFitCheck_NSUBRUN_300_NEXP_0()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Oct 20 14:20:51 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-75,-67.50321,75,83.05697);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1191[6] = {
   -50,
   -30,
   -10,
   10,
   30,
   50};
   Double_t Graph0_fy1191[6] = {
   -41.78078,
   -22.18287,
   -2.255578,
   17.20408,
   37.54443,
   57.33454};
   Double_t Graph0_fex1191[6] = {
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1191[6] = {
   0.6290674,
   0.6290674,
   0.6290674,
   0.6290674,
   0.6290674,
   0.6290674};
   TGraphErrors *gre = new TGraphErrors(6,Graph0_fx1191,Graph0_fy1191,Graph0_fex1191,Graph0_fey1191);
   gre->SetName("Graph0");
   gre->SetTitle("Sub-runs 300");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01191 = new TH1F("Graph_Graph01191","Sub-runs 300",100,-60,60);
   Graph_Graph01191->SetMinimum(-52.44719);
   Graph_Graph01191->SetMaximum(68.00095);
   Graph_Graph01191->SetDirectory(0);
   Graph_Graph01191->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01191->SetLineColor(ci);
   Graph_Graph01191->GetXaxis()->SetTitle("Applied B_{r} [ppm]");
   Graph_Graph01191->GetXaxis()->CenterTitle(true);
   Graph_Graph01191->GetXaxis()->SetLabelFont(42);
   Graph_Graph01191->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01191->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01191->GetXaxis()->SetTitleFont(42);
   Graph_Graph01191->GetYaxis()->SetTitle("Calculated B_{r} [ppm]");
   Graph_Graph01191->GetYaxis()->CenterTitle(true);
   Graph_Graph01191->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01191->GetYaxis()->SetLabelFont(42);
   Graph_Graph01191->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01191->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01191->GetYaxis()->SetTitleFont(42);
   Graph_Graph01191->GetZaxis()->SetLabelFont(42);
   Graph_Graph01191->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01191->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01191);
   
   
   TF1 *checkFit1192 = new TF1("checkFit","[0]+[1]*x",-60,60, TF1::EAddToList::kNo);
   checkFit1192->SetFillColor(19);
   checkFit1192->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   checkFit1192->SetLineColor(ci);
   checkFit1192->SetLineWidth(2);
   checkFit1192->SetChisquare(0.4866525);
   checkFit1192->SetNDF(4);
   checkFit1192->GetXaxis()->SetLabelFont(42);
   checkFit1192->GetXaxis()->SetTitleOffset(1);
   checkFit1192->GetXaxis()->SetTitleFont(42);
   checkFit1192->GetYaxis()->SetLabelFont(42);
   checkFit1192->GetYaxis()->SetTitleFont(42);
   checkFit1192->SetParameter(0,7.643971);
   checkFit1192->SetParError(0,0.2568157);
   checkFit1192->SetParLimits(0,0,0);
   checkFit1192->SetParameter(1,0.9917402);
   checkFit1192->SetParError(1,0.007518793);
   checkFit1192->SetParLimits(1,0,0);
   checkFit1192->SetParent(gre);
   gre->GetListOfFunctions()->Add(checkFit1192);
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.69,0.68,0.89,0.89,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(33);
   pt->SetTextFont(44);
   pt->SetTextSize(26);
   TText *pt_LaTex = pt->AddText("0.122");
   pt_LaTex = pt->AddText("0.992#pm0.00752");
   pt_LaTex = pt->AddText(" 7.64#pm0.257");
   pt_LaTex = pt->AddText("#minus7.71#pm0.265");
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
   TLine *line = new TLine(-60,0,-7.707635,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(-7.707635,-52.44719,-7.707635,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   
   TF1 *checkFit1193 = new TF1("checkFit","[0]+[1]*x",-60,60, TF1::EAddToList::kNo);
   checkFit1193->SetFillColor(19);
   checkFit1193->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   checkFit1193->SetLineColor(ci);
   checkFit1193->SetLineWidth(2);
   checkFit1193->SetChisquare(0.4866525);
   checkFit1193->SetNDF(4);
   checkFit1193->GetXaxis()->SetLabelFont(42);
   checkFit1193->GetXaxis()->SetTitleOffset(1);
   checkFit1193->GetXaxis()->SetTitleFont(42);
   checkFit1193->GetYaxis()->SetLabelFont(42);
   checkFit1193->GetYaxis()->SetTitleFont(42);
   checkFit1193->SetParameter(0,7.643971);
   checkFit1193->SetParError(0,0.2568157);
   checkFit1193->SetParLimits(0,0,0);
   checkFit1193->SetParameter(1,0.9917402);
   checkFit1193->SetParError(1,0.007518793);
   checkFit1193->SetParLimits(1,0,0);
   checkFit1193->Draw("same");
   
   pt = new TPaveText(0.3750503,0.94,0.6249497,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   pt_LaTex = pt->AddText("Sub-runs 300");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
