void FieldFitCheck_NSUBRUN_325_NEXP_0()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Oct 16 07:54:02 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-75,-66.91076,75,85.66605);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1181[5] = {
   -50,
   -25,
   0,
   25,
   50};
   Double_t Graph0_fy1181[5] = {
   -40.25999,
   -18.21163,
   6.833579,
   31.35136,
   59.01528};
   Double_t Graph0_fex1181[5] = {
   0,
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1181[5] = {
   1.221299,
   1.221299,
   1.221299,
   1.221299,
   1.221299};
   TGraphErrors *gre = new TGraphErrors(5,Graph0_fx1181,Graph0_fy1181,Graph0_fex1181,Graph0_fey1181);
   gre->SetName("Graph0");
   gre->SetTitle("Sub-runs 325");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01181 = new TH1F("Graph_Graph01181","Sub-runs 325",100,-60,60);
   Graph_Graph01181->SetMinimum(-51.65308);
   Graph_Graph01181->SetMaximum(70.40837);
   Graph_Graph01181->SetDirectory(0);
   Graph_Graph01181->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01181->SetLineColor(ci);
   Graph_Graph01181->GetXaxis()->SetTitle("Applied B_{r} [ppm]");
   Graph_Graph01181->GetXaxis()->CenterTitle(true);
   Graph_Graph01181->GetXaxis()->SetLabelFont(42);
   Graph_Graph01181->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01181->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01181->GetXaxis()->SetTitleFont(42);
   Graph_Graph01181->GetYaxis()->SetTitle("Calculated B_{r} [ppm]");
   Graph_Graph01181->GetYaxis()->CenterTitle(true);
   Graph_Graph01181->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01181->GetYaxis()->SetLabelFont(42);
   Graph_Graph01181->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01181->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01181->GetYaxis()->SetTitleFont(42);
   Graph_Graph01181->GetZaxis()->SetLabelFont(42);
   Graph_Graph01181->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01181->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01181);
   
   
   TF1 *checkFit1182 = new TF1("checkFit","[0]+[1]*x",-60,60, TF1::EAddToList::kNo);
   checkFit1182->SetFillColor(19);
   checkFit1182->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   checkFit1182->SetLineColor(ci);
   checkFit1182->SetLineWidth(2);
   checkFit1182->SetChisquare(5.984191);
   checkFit1182->SetNDF(3);
   checkFit1182->GetXaxis()->SetLabelFont(42);
   checkFit1182->GetXaxis()->SetTitleOffset(1);
   checkFit1182->GetXaxis()->SetTitleFont(42);
   checkFit1182->GetYaxis()->SetLabelFont(42);
   checkFit1182->GetYaxis()->SetTitleFont(42);
   checkFit1182->SetParameter(0,7.745719);
   checkFit1182->SetParError(0,0.5461814);
   checkFit1182->SetParLimits(0,0,0);
   checkFit1182->SetParameter(1,0.9924542);
   checkFit1182->SetParError(1,0.01544834);
   checkFit1182->SetParLimits(1,0,0);
   checkFit1182->SetParent(gre);
   gre->GetListOfFunctions()->Add(checkFit1182);
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.69,0.68,0.89,0.89,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(33);
   pt->SetTextFont(44);
   pt->SetTextSize(26);
   TText *pt_LaTex = pt->AddText(" 1.99");
   pt_LaTex = pt->AddText("0.992#pm0.0154");
   pt_LaTex = pt->AddText(" 7.75#pm0.546");
   pt_LaTex = pt->AddText(" #minus7.8#pm0.564");
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
   TLine *line = new TLine(-60,0,-7.804611,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(-7.804611,-51.65308,-7.804611,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   
   TF1 *checkFit1183 = new TF1("checkFit","[0]+[1]*x",-60,60, TF1::EAddToList::kNo);
   checkFit1183->SetFillColor(19);
   checkFit1183->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   checkFit1183->SetLineColor(ci);
   checkFit1183->SetLineWidth(2);
   checkFit1183->SetChisquare(5.984191);
   checkFit1183->SetNDF(3);
   checkFit1183->GetXaxis()->SetLabelFont(42);
   checkFit1183->GetXaxis()->SetTitleOffset(1);
   checkFit1183->GetXaxis()->SetTitleFont(42);
   checkFit1183->GetYaxis()->SetLabelFont(42);
   checkFit1183->GetYaxis()->SetTitleFont(42);
   checkFit1183->SetParameter(0,7.745719);
   checkFit1183->SetParError(0,0.5461814);
   checkFit1183->SetParLimits(0,0,0);
   checkFit1183->SetParameter(1,0.9924542);
   checkFit1183->SetParError(1,0.01544834);
   checkFit1183->SetParLimits(1,0,0);
   checkFit1183->Draw("same");
   
   pt = new TPaveText(0.3750503,0.94,0.6249497,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   pt_LaTex = pt->AddText("Sub-runs 325");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
