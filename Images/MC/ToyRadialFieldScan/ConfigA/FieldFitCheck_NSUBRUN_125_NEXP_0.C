void FieldFitCheck_NSUBRUN_125_NEXP_0()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Oct 20 14:21:22 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-75,-66.79909,75,83.91403);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1079[6] = {
   -50,
   -30,
   -10,
   10,
   30,
   50};
   Double_t Graph0_fy1079[6] = {
   -40.95715,
   -21.88997,
   -2.589053,
   17.65829,
   39.20713,
   58.07209};
   Double_t Graph0_fex1079[6] = {
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1079[6] = {
   0.7230883,
   0.7230883,
   0.7230883,
   0.7230883,
   0.7230883,
   0.7230883};
   TGraphErrors *gre = new TGraphErrors(6,Graph0_fx1079,Graph0_fy1079,Graph0_fex1079,Graph0_fey1079);
   gre->SetName("Graph0");
   gre->SetTitle("Sub-runs 125");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01079 = new TH1F("Graph_Graph01079","Sub-runs 125",100,-60,60);
   Graph_Graph01079->SetMinimum(-51.72778);
   Graph_Graph01079->SetMaximum(68.84272);
   Graph_Graph01079->SetDirectory(0);
   Graph_Graph01079->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01079->SetLineColor(ci);
   Graph_Graph01079->GetXaxis()->SetTitle("Applied B_{r} [ppm]");
   Graph_Graph01079->GetXaxis()->CenterTitle(true);
   Graph_Graph01079->GetXaxis()->SetLabelFont(42);
   Graph_Graph01079->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01079->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01079->GetXaxis()->SetTitleFont(42);
   Graph_Graph01079->GetYaxis()->SetTitle("Calculated B_{r} [ppm]");
   Graph_Graph01079->GetYaxis()->CenterTitle(true);
   Graph_Graph01079->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01079->GetYaxis()->SetLabelFont(42);
   Graph_Graph01079->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01079->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01079->GetYaxis()->SetTitleFont(42);
   Graph_Graph01079->GetZaxis()->SetLabelFont(42);
   Graph_Graph01079->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01079->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01079);
   
   
   TF1 *checkFit1080 = new TF1("checkFit","[0]+[1]*x",-60,60, TF1::EAddToList::kNo);
   checkFit1080->SetFillColor(19);
   checkFit1080->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   checkFit1080->SetLineColor(ci);
   checkFit1080->SetLineWidth(2);
   checkFit1080->SetChisquare(5.02121);
   checkFit1080->SetNDF(4);
   checkFit1080->GetXaxis()->SetLabelFont(42);
   checkFit1080->GetXaxis()->SetTitleOffset(1);
   checkFit1080->GetXaxis()->SetTitleFont(42);
   checkFit1080->GetYaxis()->SetLabelFont(42);
   checkFit1080->GetYaxis()->SetTitleFont(42);
   checkFit1080->SetParameter(0,8.250224);
   checkFit1080->SetParError(0,0.2951996);
   checkFit1080->SetParLimits(0,0,0);
   checkFit1080->SetParameter(1,0.9981212);
   checkFit1080->SetParError(1,0.008642558);
   checkFit1080->SetParLimits(1,0,0);
   checkFit1080->SetParent(gre);
   gre->GetListOfFunctions()->Add(checkFit1080);
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.69,0.68,0.89,0.89,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(33);
   pt->SetTextFont(44);
   pt->SetTextSize(26);
   TText *pt_LaTex = pt->AddText(" 1.26");
   pt_LaTex = pt->AddText("0.998#pm0.00864");
   pt_LaTex = pt->AddText(" 8.25#pm0.295");
   pt_LaTex = pt->AddText("#minus8.27#pm0.304");
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
   TLine *line = new TLine(-60,0,-8.265754,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(-8.265754,-51.72778,-8.265754,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   
   TF1 *checkFit1081 = new TF1("checkFit","[0]+[1]*x",-60,60, TF1::EAddToList::kNo);
   checkFit1081->SetFillColor(19);
   checkFit1081->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   checkFit1081->SetLineColor(ci);
   checkFit1081->SetLineWidth(2);
   checkFit1081->SetChisquare(5.02121);
   checkFit1081->SetNDF(4);
   checkFit1081->GetXaxis()->SetLabelFont(42);
   checkFit1081->GetXaxis()->SetTitleOffset(1);
   checkFit1081->GetXaxis()->SetTitleFont(42);
   checkFit1081->GetYaxis()->SetLabelFont(42);
   checkFit1081->GetYaxis()->SetTitleFont(42);
   checkFit1081->SetParameter(0,8.250224);
   checkFit1081->SetParError(0,0.2951996);
   checkFit1081->SetParLimits(0,0,0);
   checkFit1081->SetParameter(1,0.9981212);
   checkFit1081->SetParError(1,0.008642558);
   checkFit1081->SetParLimits(1,0,0);
   checkFit1081->Draw("same");
   
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
