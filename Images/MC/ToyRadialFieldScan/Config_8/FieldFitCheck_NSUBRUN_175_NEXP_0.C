void FieldFitCheck_NSUBRUN_175_NEXP_0()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Oct 16 07:53:55 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-75,-66.82416,75,89.10672);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1097[5] = {
   -50,
   -25,
   0,
   25,
   50};
   Double_t Graph0_fy1097[5] = {
   -39.16964,
   -17.60384,
   6.293928,
   31.45774,
   61.4522};
   Double_t Graph0_fex1097[5] = {
   0,
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1097[5] = {
   1.666033,
   1.666033,
   1.666033,
   1.666033,
   1.666033};
   TGraphErrors *gre = new TGraphErrors(5,Graph0_fx1097,Graph0_fy1097,Graph0_fex1097,Graph0_fey1097);
   gre->SetName("Graph0");
   gre->SetTitle("Sub-runs 175");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01097 = new TH1F("Graph_Graph01097","Sub-runs 175",100,-60,60);
   Graph_Graph01097->SetMinimum(-51.23107);
   Graph_Graph01097->SetMaximum(73.51363);
   Graph_Graph01097->SetDirectory(0);
   Graph_Graph01097->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01097->SetLineColor(ci);
   Graph_Graph01097->GetXaxis()->SetTitle("Applied B_{r} [ppm]");
   Graph_Graph01097->GetXaxis()->CenterTitle(true);
   Graph_Graph01097->GetXaxis()->SetLabelFont(42);
   Graph_Graph01097->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01097->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01097->GetXaxis()->SetTitleFont(42);
   Graph_Graph01097->GetYaxis()->SetTitle("Calculated B_{r} [ppm]");
   Graph_Graph01097->GetYaxis()->CenterTitle(true);
   Graph_Graph01097->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01097->GetYaxis()->SetLabelFont(42);
   Graph_Graph01097->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01097->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01097->GetYaxis()->SetTitleFont(42);
   Graph_Graph01097->GetZaxis()->SetLabelFont(42);
   Graph_Graph01097->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01097->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01097);
   
   
   TF1 *checkFit1098 = new TF1("checkFit","[0]+[1]*x",-60,60, TF1::EAddToList::kNo);
   checkFit1098->SetFillColor(19);
   checkFit1098->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   checkFit1098->SetLineColor(ci);
   checkFit1098->SetLineWidth(2);
   checkFit1098->SetChisquare(8.787731);
   checkFit1098->SetNDF(3);
   checkFit1098->GetXaxis()->SetLabelFont(42);
   checkFit1098->GetXaxis()->SetTitleOffset(1);
   checkFit1098->GetXaxis()->SetTitleFont(42);
   checkFit1098->GetYaxis()->SetLabelFont(42);
   checkFit1098->GetYaxis()->SetTitleFont(42);
   checkFit1098->SetParameter(0,8.486078);
   checkFit1098->SetParError(0,0.7450727);
   checkFit1098->SetParLimits(0,0,0);
   checkFit1098->SetParameter(1,1.001221);
   checkFit1098->SetParError(1,0.02107384);
   checkFit1098->SetParLimits(1,0,0);
   checkFit1098->SetParent(gre);
   gre->GetListOfFunctions()->Add(checkFit1098);
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.69,0.68,0.89,0.89,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(33);
   pt->SetTextFont(44);
   pt->SetTextSize(26);
   TText *pt_LaTex = pt->AddText(" 2.93");
   pt_LaTex = pt->AddText("    1#pm0.0211");
   pt_LaTex = pt->AddText(" 8.49#pm0.745");
   pt_LaTex = pt->AddText("#minus8.48#pm0.765");
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
   TLine *line = new TLine(-60,0,-8.475728,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(-8.475728,-51.23107,-8.475728,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   
   TF1 *checkFit1099 = new TF1("checkFit","[0]+[1]*x",-60,60, TF1::EAddToList::kNo);
   checkFit1099->SetFillColor(19);
   checkFit1099->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   checkFit1099->SetLineColor(ci);
   checkFit1099->SetLineWidth(2);
   checkFit1099->SetChisquare(8.787731);
   checkFit1099->SetNDF(3);
   checkFit1099->GetXaxis()->SetLabelFont(42);
   checkFit1099->GetXaxis()->SetTitleOffset(1);
   checkFit1099->GetXaxis()->SetTitleFont(42);
   checkFit1099->GetYaxis()->SetLabelFont(42);
   checkFit1099->GetYaxis()->SetTitleFont(42);
   checkFit1099->SetParameter(0,8.486078);
   checkFit1099->SetParError(0,0.7450727);
   checkFit1099->SetParLimits(0,0,0);
   checkFit1099->SetParameter(1,1.001221);
   checkFit1099->SetParError(1,0.02107384);
   checkFit1099->SetParLimits(1,0,0);
   checkFit1099->Draw("same");
   
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
