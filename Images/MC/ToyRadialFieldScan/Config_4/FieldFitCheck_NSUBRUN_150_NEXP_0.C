void FieldFitCheck_NSUBRUN_150_NEXP_0()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Oct 15 00:39:46 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-75,-68.90639,75,85.12665);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1155[11] = {
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
   Double_t Graph0_fy1155[11] = {
   -42.10314,
   -31.65253,
   -21.57944,
   -13.15899,
   -0.5845616,
   6.928676,
   18.01069,
   28.12389,
   38.51285,
   49.17391,
   58.32339};
   Double_t Graph0_fex1155[11] = {
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
   Double_t Graph0_fey1155[11] = {
   1.13108,
   1.13108,
   1.13108,
   1.13108,
   1.13108,
   1.13108,
   1.13108,
   1.13108,
   1.13108,
   1.13108,
   1.13108};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1155,Graph0_fy1155,Graph0_fex1155,Graph0_fey1155);
   gre->SetName("Graph0");
   gre->SetTitle("Sub-runs 150");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01155 = new TH1F("Graph_Graph01155","Sub-runs 150",100,-60,60);
   Graph_Graph01155->SetMinimum(-53.50309);
   Graph_Graph01155->SetMaximum(69.72334);
   Graph_Graph01155->SetDirectory(0);
   Graph_Graph01155->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01155->SetLineColor(ci);
   Graph_Graph01155->GetXaxis()->SetTitle("Applied B_{r} [ppm]");
   Graph_Graph01155->GetXaxis()->CenterTitle(true);
   Graph_Graph01155->GetXaxis()->SetLabelFont(42);
   Graph_Graph01155->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01155->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01155->GetXaxis()->SetTitleFont(42);
   Graph_Graph01155->GetYaxis()->SetTitle("Calculated B_{r} [ppm]");
   Graph_Graph01155->GetYaxis()->CenterTitle(true);
   Graph_Graph01155->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01155->GetYaxis()->SetLabelFont(42);
   Graph_Graph01155->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01155->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01155->GetYaxis()->SetTitleFont(42);
   Graph_Graph01155->GetZaxis()->SetLabelFont(42);
   Graph_Graph01155->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01155->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01155);
   
   
   TF1 *checkFit1156 = new TF1("checkFit","[0]+[1]*x",-60,60, TF1::EAddToList::kNo);
   checkFit1156->SetFillColor(19);
   checkFit1156->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   checkFit1156->SetLineColor(ci);
   checkFit1156->SetLineWidth(2);
   checkFit1156->SetChisquare(4.511875);
   checkFit1156->SetNDF(9);
   checkFit1156->GetXaxis()->SetLabelFont(42);
   checkFit1156->GetXaxis()->SetTitleOffset(1);
   checkFit1156->GetXaxis()->SetTitleFont(42);
   checkFit1156->GetYaxis()->SetLabelFont(42);
   checkFit1156->GetYaxis()->SetTitleFont(42);
   checkFit1156->SetParameter(0,8.181341);
   checkFit1156->SetParError(0,0.3410336);
   checkFit1156->SetParLimits(0,0,0);
   checkFit1156->SetParameter(1,1.006251);
   checkFit1156->SetParError(1,0.01078443);
   checkFit1156->SetParLimits(1,0,0);
   checkFit1156->SetParent(gre);
   gre->GetListOfFunctions()->Add(checkFit1156);
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.69,0.68,0.89,0.89,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(33);
   pt->SetTextFont(44);
   pt->SetTextSize(26);
   TText *pt_LaTex = pt->AddText("0.501");
   pt_LaTex = pt->AddText(" 1.01#pm0.0108");
   pt_LaTex = pt->AddText(" 8.18#pm0.341");
   pt_LaTex = pt->AddText("#minus8.13#pm 0.35");
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
   TLine *line = new TLine(-60,0,-8.130516,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(-8.130516,-53.50309,-8.130516,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   
   TF1 *checkFit1157 = new TF1("checkFit","[0]+[1]*x",-60,60, TF1::EAddToList::kNo);
   checkFit1157->SetFillColor(19);
   checkFit1157->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   checkFit1157->SetLineColor(ci);
   checkFit1157->SetLineWidth(2);
   checkFit1157->SetChisquare(4.511875);
   checkFit1157->SetNDF(9);
   checkFit1157->GetXaxis()->SetLabelFont(42);
   checkFit1157->GetXaxis()->SetTitleOffset(1);
   checkFit1157->GetXaxis()->SetTitleFont(42);
   checkFit1157->GetYaxis()->SetLabelFont(42);
   checkFit1157->GetYaxis()->SetTitleFont(42);
   checkFit1157->SetParameter(0,8.181341);
   checkFit1157->SetParError(0,0.3410336);
   checkFit1157->SetParLimits(0,0,0);
   checkFit1157->SetParameter(1,1.006251);
   checkFit1157->SetParError(1,0.01078443);
   checkFit1157->SetParLimits(1,0,0);
   checkFit1157->Draw("same");
   
   pt = new TPaveText(0.3750503,0.94,0.6249497,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   pt_LaTex = pt->AddText("Sub-runs 150");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
