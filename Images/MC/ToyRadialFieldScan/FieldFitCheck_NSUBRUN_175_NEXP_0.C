void FieldFitCheck_NSUBRUN_175_NEXP_0()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Nov 17 18:03:16 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-75,-68.44935,75,85.01138);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1111[6] = {
   -50,
   -30,
   -10,
   10,
   30,
   50};
   Double_t Graph0_fy1111[6] = {
   -42.26009,
   -21.66516,
   -2.953378,
   19.11544,
   37.94322,
   58.82212};
   Double_t Graph0_fex1111[6] = {
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1111[6] = {
   0.6124734,
   0.6124734,
   0.6124734,
   0.6124734,
   0.6124734,
   0.6124734};
   TGraphErrors *gre = new TGraphErrors(6,Graph0_fx1111,Graph0_fy1111,Graph0_fex1111,Graph0_fey1111);
   gre->SetName("Graph0");
   gre->SetTitle("175 sub-runs");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01111 = new TH1F("Graph_Graph01111","175 sub-runs",100,-60,60);
   Graph_Graph01111->SetMinimum(-53.10328);
   Graph_Graph01111->SetMaximum(69.6653);
   Graph_Graph01111->SetDirectory(0);
   Graph_Graph01111->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01111->SetLineColor(ci);
   Graph_Graph01111->GetXaxis()->SetTitle("Applied #LTB_{r}#GT [ppm]");
   Graph_Graph01111->GetXaxis()->CenterTitle(true);
   Graph_Graph01111->GetXaxis()->SetLabelFont(42);
   Graph_Graph01111->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01111->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01111->GetXaxis()->SetTitleFont(42);
   Graph_Graph01111->GetYaxis()->SetTitle("Calculated B_{r} [ppm]");
   Graph_Graph01111->GetYaxis()->CenterTitle(true);
   Graph_Graph01111->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01111->GetYaxis()->SetLabelFont(42);
   Graph_Graph01111->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01111->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01111->GetYaxis()->SetTitleFont(42);
   Graph_Graph01111->GetZaxis()->SetLabelFont(42);
   Graph_Graph01111->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01111->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01111);
   
   
   TF1 *checkFit1112 = new TF1("checkFit","[0]+[1]*x",-60,60, TF1::EAddToList::kNo);
   checkFit1112->SetFillColor(19);
   checkFit1112->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   checkFit1112->SetLineColor(ci);
   checkFit1112->SetLineWidth(2);
   checkFit1112->SetChisquare(6.069273);
   checkFit1112->SetNDF(4);
   checkFit1112->GetXaxis()->SetLabelFont(42);
   checkFit1112->GetXaxis()->SetTitleOffset(1);
   checkFit1112->GetXaxis()->SetTitleFont(42);
   checkFit1112->GetYaxis()->SetLabelFont(42);
   checkFit1112->GetYaxis()->SetTitleFont(42);
   checkFit1112->SetParameter(0,8.167026);
   checkFit1112->SetParError(0,0.2500413);
   checkFit1112->SetParLimits(0,0,0);
   checkFit1112->SetParameter(1,1.009007);
   checkFit1112->SetParError(1,0.007320458);
   checkFit1112->SetParLimits(1,0,0);
   checkFit1112->SetParent(gre);
   gre->GetListOfFunctions()->Add(checkFit1112);
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.5,0.68,0.6,0.89,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(33);
   pt->SetTextFont(44);
   pt->SetTextSize(26);
   TText *pt_LaTex = pt->AddText(" 1.52");
   pt_LaTex = pt->AddText(" 1.01#pm0.00732");
   pt_LaTex = pt->AddText(" 8.17#pm 0.25");
   pt_LaTex = pt->AddText(" 8.09#pm0.255");
   pt->Draw();
   
   pt = new TPaveText(0.11,0.68,0.33,0.89,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(13);
   pt->SetTextFont(44);
   pt->SetTextSize(26);
   pt_LaTex = pt->AddText("#chi^{2}/ndf");
   pt_LaTex = pt->AddText("Gradient");
   pt_LaTex = pt->AddText("Y-intercept [mm/kV]");
   pt_LaTex = pt->AddText("Background B_{r} [ppm]");
   pt->Draw();
   TLine *line = new TLine(-60,0,-8.094122,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(-8.094122,-53.10328,-8.094122,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   
   TF1 *checkFit1113 = new TF1("checkFit","[0]+[1]*x",-60,60, TF1::EAddToList::kNo);
   checkFit1113->SetFillColor(19);
   checkFit1113->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   checkFit1113->SetLineColor(ci);
   checkFit1113->SetLineWidth(2);
   checkFit1113->SetChisquare(6.069273);
   checkFit1113->SetNDF(4);
   checkFit1113->GetXaxis()->SetLabelFont(42);
   checkFit1113->GetXaxis()->SetTitleOffset(1);
   checkFit1113->GetXaxis()->SetTitleFont(42);
   checkFit1113->GetYaxis()->SetLabelFont(42);
   checkFit1113->GetYaxis()->SetTitleFont(42);
   checkFit1113->SetParameter(0,8.167026);
   checkFit1113->SetParError(0,0.2500413);
   checkFit1113->SetParLimits(0,0,0);
   checkFit1113->SetParameter(1,1.009007);
   checkFit1113->SetParError(1,0.007320458);
   checkFit1113->SetParLimits(1,0,0);
   checkFit1113->Draw("same");
   
   pt = new TPaveText(0.3769347,0.94,0.6230653,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   pt_LaTex = pt->AddText("175 sub-runs");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
