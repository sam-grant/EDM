void FieldFitCheck_NSUBRUN_100_NEXP_0()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Oct 15 00:42:31 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-75,-67.11402,75,84.8265);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1103[11] = {
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
   Double_t Graph0_fy1103[11] = {
   -40.40361,
   -34.21248,
   -17.84717,
   -13.57419,
   -5.094926,
   7.040781,
   17.3661,
   28.00438,
   35.77705,
   46.99268,
   58.11609};
   Double_t Graph0_fex1103[11] = {
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
   Double_t Graph0_fey1103[11] = {
   1.386995,
   1.386995,
   1.386995,
   1.386995,
   1.386995,
   1.386995,
   1.386995,
   1.386995,
   1.386995,
   1.386995,
   1.386995};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1103,Graph0_fy1103,Graph0_fex1103,Graph0_fey1103);
   gre->SetName("Graph0");
   gre->SetTitle("Sub-runs 100");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01103 = new TH1F("Graph_Graph01103","Sub-runs 100",100,-60,60);
   Graph_Graph01103->SetMinimum(-51.91997);
   Graph_Graph01103->SetMaximum(69.63245);
   Graph_Graph01103->SetDirectory(0);
   Graph_Graph01103->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01103->SetLineColor(ci);
   Graph_Graph01103->GetXaxis()->SetTitle("Applied B_{r} [ppm]");
   Graph_Graph01103->GetXaxis()->CenterTitle(true);
   Graph_Graph01103->GetXaxis()->SetLabelFont(42);
   Graph_Graph01103->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01103->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01103->GetXaxis()->SetTitleFont(42);
   Graph_Graph01103->GetYaxis()->SetTitle("Calculated B_{r} [ppm]");
   Graph_Graph01103->GetYaxis()->CenterTitle(true);
   Graph_Graph01103->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01103->GetYaxis()->SetLabelFont(42);
   Graph_Graph01103->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01103->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01103->GetYaxis()->SetTitleFont(42);
   Graph_Graph01103->GetZaxis()->SetLabelFont(42);
   Graph_Graph01103->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01103->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01103);
   
   
   TF1 *checkFit1104 = new TF1("checkFit","[0]+[1]*x",-60,60, TF1::EAddToList::kNo);
   checkFit1104->SetFillColor(19);
   checkFit1104->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   checkFit1104->SetLineColor(ci);
   checkFit1104->SetLineWidth(2);
   checkFit1104->SetChisquare(20.0591);
   checkFit1104->SetNDF(9);
   checkFit1104->GetXaxis()->SetLabelFont(42);
   checkFit1104->GetXaxis()->SetTitleOffset(1);
   checkFit1104->GetXaxis()->SetTitleFont(42);
   checkFit1104->GetYaxis()->SetLabelFont(42);
   checkFit1104->GetYaxis()->SetTitleFont(42);
   checkFit1104->SetParameter(0,7.469517);
   checkFit1104->SetParError(0,0.4181946);
   checkFit1104->SetParLimits(0,0,0);
   checkFit1104->SetParameter(1,0.9853727);
   checkFit1104->SetParError(1,0.01322448);
   checkFit1104->SetParLimits(1,0,0);
   checkFit1104->SetParent(gre);
   gre->GetListOfFunctions()->Add(checkFit1104);
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.69,0.68,0.89,0.89,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(33);
   pt->SetTextFont(44);
   pt->SetTextSize(26);
   TText *pt_LaTex = pt->AddText(" 2.23");
   pt_LaTex = pt->AddText("0.985#pm0.0132");
   pt_LaTex = pt->AddText(" 7.47#pm0.418");
   pt_LaTex = pt->AddText("#minus7.58#pm0.436");
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
   TLine *line = new TLine(-60,0,-7.580398,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(-7.580398,-51.91997,-7.580398,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   
   TF1 *checkFit1105 = new TF1("checkFit","[0]+[1]*x",-60,60, TF1::EAddToList::kNo);
   checkFit1105->SetFillColor(19);
   checkFit1105->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   checkFit1105->SetLineColor(ci);
   checkFit1105->SetLineWidth(2);
   checkFit1105->SetChisquare(20.0591);
   checkFit1105->SetNDF(9);
   checkFit1105->GetXaxis()->SetLabelFont(42);
   checkFit1105->GetXaxis()->SetTitleOffset(1);
   checkFit1105->GetXaxis()->SetTitleFont(42);
   checkFit1105->GetYaxis()->SetLabelFont(42);
   checkFit1105->GetYaxis()->SetTitleFont(42);
   checkFit1105->SetParameter(0,7.469517);
   checkFit1105->SetParError(0,0.4181946);
   checkFit1105->SetParLimits(0,0,0);
   checkFit1105->SetParameter(1,0.9853727);
   checkFit1105->SetParError(1,0.01322448);
   checkFit1105->SetParLimits(1,0,0);
   checkFit1105->Draw("same");
   
   pt = new TPaveText(0.3750503,0.94,0.6249497,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   pt_LaTex = pt->AddText("Sub-runs 100");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
