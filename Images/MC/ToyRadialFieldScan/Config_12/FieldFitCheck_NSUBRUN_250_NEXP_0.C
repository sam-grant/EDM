void FieldFitCheck_NSUBRUN_250_NEXP_0()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Oct 16 07:57:20 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-75,-69.50275,75,86.43335);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1139[5] = {
   -50,
   -25,
   0,
   25,
   50};
   Double_t Graph0_fy1139[5] = {
   -42.63815,
   -17.80299,
   8.542395,
   32.88432,
   59.56875};
   Double_t Graph0_fex1139[5] = {
   0,
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1139[5] = {
   0.8752481,
   0.8752481,
   0.8752481,
   0.8752481,
   0.8752481};
   TGraphErrors *gre = new TGraphErrors(5,Graph0_fx1139,Graph0_fy1139,Graph0_fex1139,Graph0_fey1139);
   gre->SetName("Graph0");
   gre->SetTitle("Sub-runs 250");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01139 = new TH1F("Graph_Graph01139","Sub-runs 250",100,-60,60);
   Graph_Graph01139->SetMinimum(-53.90914);
   Graph_Graph01139->SetMaximum(70.83974);
   Graph_Graph01139->SetDirectory(0);
   Graph_Graph01139->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01139->SetLineColor(ci);
   Graph_Graph01139->GetXaxis()->SetTitle("Applied B_{r} [ppm]");
   Graph_Graph01139->GetXaxis()->CenterTitle(true);
   Graph_Graph01139->GetXaxis()->SetLabelFont(42);
   Graph_Graph01139->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01139->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01139->GetXaxis()->SetTitleFont(42);
   Graph_Graph01139->GetYaxis()->SetTitle("Calculated B_{r} [ppm]");
   Graph_Graph01139->GetYaxis()->CenterTitle(true);
   Graph_Graph01139->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01139->GetYaxis()->SetLabelFont(42);
   Graph_Graph01139->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01139->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01139->GetYaxis()->SetTitleFont(42);
   Graph_Graph01139->GetZaxis()->SetLabelFont(42);
   Graph_Graph01139->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01139->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01139);
   
   
   TF1 *checkFit1140 = new TF1("checkFit","[0]+[1]*x",-60,60, TF1::EAddToList::kNo);
   checkFit1140->SetFillColor(19);
   checkFit1140->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   checkFit1140->SetLineColor(ci);
   checkFit1140->SetLineWidth(2);
   checkFit1140->SetChisquare(1.510322);
   checkFit1140->SetNDF(3);
   checkFit1140->GetXaxis()->SetLabelFont(42);
   checkFit1140->GetXaxis()->SetTitleOffset(1);
   checkFit1140->GetXaxis()->SetTitleFont(42);
   checkFit1140->GetYaxis()->SetLabelFont(42);
   checkFit1140->GetYaxis()->SetTitleFont(42);
   checkFit1140->SetParameter(0,8.110865);
   checkFit1140->SetParError(0,0.3914229);
   checkFit1140->SetParLimits(0,0,0);
   checkFit1140->SetParameter(1,1.020404);
   checkFit1140->SetParError(1,0.01107111);
   checkFit1140->SetParLimits(1,0,0);
   checkFit1140->SetParent(gre);
   gre->GetListOfFunctions()->Add(checkFit1140);
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.69,0.68,0.89,0.89,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(33);
   pt->SetTextFont(44);
   pt->SetTextSize(26);
   TText *pt_LaTex = pt->AddText("0.503");
   pt_LaTex = pt->AddText(" 1.02#pm0.0111");
   pt_LaTex = pt->AddText(" 8.11#pm0.391");
   pt_LaTex = pt->AddText("#minus7.95#pm0.393");
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
   TLine *line = new TLine(-60,0,-7.948677,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(-7.948677,-53.90914,-7.948677,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   
   TF1 *checkFit1141 = new TF1("checkFit","[0]+[1]*x",-60,60, TF1::EAddToList::kNo);
   checkFit1141->SetFillColor(19);
   checkFit1141->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   checkFit1141->SetLineColor(ci);
   checkFit1141->SetLineWidth(2);
   checkFit1141->SetChisquare(1.510322);
   checkFit1141->SetNDF(3);
   checkFit1141->GetXaxis()->SetLabelFont(42);
   checkFit1141->GetXaxis()->SetTitleOffset(1);
   checkFit1141->GetXaxis()->SetTitleFont(42);
   checkFit1141->GetYaxis()->SetLabelFont(42);
   checkFit1141->GetYaxis()->SetTitleFont(42);
   checkFit1141->SetParameter(0,8.110865);
   checkFit1141->SetParError(0,0.3914229);
   checkFit1141->SetParLimits(0,0,0);
   checkFit1141->SetParameter(1,1.020404);
   checkFit1141->SetParError(1,0.01107111);
   checkFit1141->SetParLimits(1,0,0);
   checkFit1141->Draw("same");
   
   pt = new TPaveText(0.3750503,0.94,0.6249497,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   pt_LaTex = pt->AddText("Sub-runs 250");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
