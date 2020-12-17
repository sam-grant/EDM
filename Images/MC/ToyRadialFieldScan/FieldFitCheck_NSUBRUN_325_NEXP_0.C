void FieldFitCheck_NSUBRUN_325_NEXP_0()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Dec 16 20:33:14 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-75,-67.63406,75,83.09578);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1207[6] = {
   -50,
   -30,
   -10,
   10,
   30,
   50};
   Double_t Graph0_fy1207[6] = {
   -42.06404,
   -22.46608,
   -2.010729,
   18.6066,
   38.05339,
   57.52576};
   Double_t Graph0_fex1207[6] = {
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1207[6] = {
   0.4483764,
   0.4483764,
   0.4483764,
   0.4483764,
   0.4483764,
   0.4483764};
   TGraphErrors *gre = new TGraphErrors(6,Graph0_fx1207,Graph0_fy1207,Graph0_fex1207,Graph0_fey1207);
   gre->SetName("Graph0");
   gre->SetTitle("325 sub-runs");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01207 = new TH1F("Graph_Graph01207","325 sub-runs",100,-60,60);
   Graph_Graph01207->SetMinimum(-52.56107);
   Graph_Graph01207->SetMaximum(68.0228);
   Graph_Graph01207->SetDirectory(0);
   Graph_Graph01207->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01207->SetLineColor(ci);
   Graph_Graph01207->GetXaxis()->SetTitle("#LTB_{r}^{App}#GT [ppm]");
   Graph_Graph01207->GetXaxis()->CenterTitle(true);
   Graph_Graph01207->GetXaxis()->SetLabelFont(42);
   Graph_Graph01207->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01207->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01207->GetXaxis()->SetTitleFont(42);
   Graph_Graph01207->GetYaxis()->SetTitle("Calculated B_{r} [ppm]");
   Graph_Graph01207->GetYaxis()->CenterTitle(true);
   Graph_Graph01207->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01207->GetYaxis()->SetLabelFont(42);
   Graph_Graph01207->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01207->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01207->GetYaxis()->SetTitleFont(42);
   Graph_Graph01207->GetZaxis()->SetLabelFont(42);
   Graph_Graph01207->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01207->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01207);
   
   
   TF1 *checkFit1208 = new TF1("checkFit","[0]+[1]*x",-60,60, TF1::EAddToList::kNo);
   checkFit1208->SetFillColor(19);
   checkFit1208->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   checkFit1208->SetLineColor(ci);
   checkFit1208->SetLineWidth(2);
   checkFit1208->SetChisquare(3.959022);
   checkFit1208->SetNDF(4);
   checkFit1208->GetXaxis()->SetLabelFont(42);
   checkFit1208->GetXaxis()->SetTitleOffset(1);
   checkFit1208->GetXaxis()->SetTitleFont(42);
   checkFit1208->GetYaxis()->SetLabelFont(42);
   checkFit1208->GetYaxis()->SetTitleFont(42);
   checkFit1208->SetParameter(0,7.940818);
   checkFit1208->SetParError(0,0.1830489);
   checkFit1208->SetParLimits(0,0,0);
   checkFit1208->SetParameter(1,1.000178);
   checkFit1208->SetParError(1,0.005359123);
   checkFit1208->SetParLimits(1,0,0);
   checkFit1208->SetParent(gre);
   gre->GetListOfFunctions()->Add(checkFit1208);
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.5,0.68,0.6,0.89,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(33);
   pt->SetTextFont(44);
   pt->SetTextSize(26);
   TText *pt_LaTex = pt->AddText(" 0.99");
   pt_LaTex = pt->AddText("    1#pm0.00536");
   pt_LaTex = pt->AddText(" 7.94#pm0.183");
   pt_LaTex = pt->AddText(" 7.94#pm0.188");
   pt->Draw();
   
   pt = new TPaveText(0.11,0.68,0.33,0.89,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(13);
   pt->SetTextFont(44);
   pt->SetTextSize(26);
   pt_LaTex = pt->AddText("#chi^{2}/ndf");
   pt_LaTex = pt->AddText("Gradient");
   pt_LaTex = pt->AddText("Y-intercept [mm#upointkV]");
   pt_LaTex = pt->AddText("#LTB_{r}^{Bkg}#GT [ppm]");
   pt->Draw();
   TLine *line = new TLine(-60,0,-7.939403,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(-7.939403,-52.56107,-7.939403,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   
   TF1 *checkFit1209 = new TF1("checkFit","[0]+[1]*x",-60,60, TF1::EAddToList::kNo);
   checkFit1209->SetFillColor(19);
   checkFit1209->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   checkFit1209->SetLineColor(ci);
   checkFit1209->SetLineWidth(2);
   checkFit1209->SetChisquare(3.959022);
   checkFit1209->SetNDF(4);
   checkFit1209->GetXaxis()->SetLabelFont(42);
   checkFit1209->GetXaxis()->SetTitleOffset(1);
   checkFit1209->GetXaxis()->SetTitleFont(42);
   checkFit1209->GetYaxis()->SetLabelFont(42);
   checkFit1209->GetYaxis()->SetTitleFont(42);
   checkFit1209->SetParameter(0,7.940818);
   checkFit1209->SetParError(0,0.1830489);
   checkFit1209->SetParLimits(0,0,0);
   checkFit1209->SetParameter(1,1.000178);
   checkFit1209->SetParError(1,0.005359123);
   checkFit1209->SetParLimits(1,0,0);
   checkFit1209->Draw("same");
   
   pt = new TPaveText(0.3769347,0.94,0.6230653,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   pt_LaTex = pt->AddText("325 sub-runs");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
