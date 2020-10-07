void Result_NSUBRUN_125()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Oct  5 20:04:42 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-45,-0.1235007,45,0.1735007);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1129[4] = {
   -30,
   -10,
   10,
   30};
   Double_t Graph0_fy1129[4] = {
   0.11875,
   0.05625,
   -0.00625,
   -0.06875};
   Double_t Graph0_fex1129[4] = {
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1129[4] = {
   0.005250445,
   0.005250445,
   0.005250445,
   0.005250445};
   TGraphErrors *gre = new TGraphErrors(4,Graph0_fx1129,Graph0_fy1129,Graph0_fex1129,Graph0_fey1129);
   gre->SetName("Graph0");
   gre->SetTitle("Sub-runs 125");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01129 = new TH1F("Graph_Graph01129","Sub-runs 125",100,-36,36);
   Graph_Graph01129->SetMinimum(-0.09380053);
   Graph_Graph01129->SetMaximum(0.1438005);
   Graph_Graph01129->SetDirectory(0);
   Graph_Graph01129->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01129->SetLineColor(ci);
   Graph_Graph01129->GetXaxis()->SetTitle("Applied B_{r} [ppm]");
   Graph_Graph01129->GetXaxis()->CenterTitle(true);
   Graph_Graph01129->GetXaxis()->SetLabelFont(42);
   Graph_Graph01129->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01129->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01129->GetXaxis()->SetTitleFont(42);
   Graph_Graph01129->GetYaxis()->SetTitle("#LTy#GT / QHV [mm/kV]");
   Graph_Graph01129->GetYaxis()->CenterTitle(true);
   Graph_Graph01129->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01129->GetYaxis()->SetLabelFont(42);
   Graph_Graph01129->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01129->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01129->GetYaxis()->SetTitleFont(42);
   Graph_Graph01129->GetZaxis()->SetLabelFont(42);
   Graph_Graph01129->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01129->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01129);
   
   
   TF1 *lineFit21130 = new TF1("lineFit2","pol 1",-36,36, TF1::EAddToList::kNo);
   lineFit21130->SetFillColor(19);
   lineFit21130->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   lineFit21130->SetLineColor(ci);
   lineFit21130->SetLineWidth(2);
   lineFit21130->SetChisquare(2.351947e-26);
   lineFit21130->SetNDF(2);
   lineFit21130->GetXaxis()->SetLabelFont(42);
   lineFit21130->GetXaxis()->SetTitleOffset(1);
   lineFit21130->GetXaxis()->SetTitleFont(42);
   lineFit21130->GetYaxis()->SetLabelFont(42);
   lineFit21130->GetYaxis()->SetTitleFont(42);
   lineFit21130->SetParameter(0,0.025);
   lineFit21130->SetParError(0,0.002625222);
   lineFit21130->SetParLimits(0,0,0);
   lineFit21130->SetParameter(1,-0.003125);
   lineFit21130->SetParError(1,0.0001174035);
   lineFit21130->SetParLimits(1,0,0);
   lineFit21130->SetParent(gre);
   gre->GetListOfFunctions()->Add(lineFit21130);
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.69,0.68,0.89,0.89,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(33);
   pt->SetTextFont(44);
   pt->SetTextSize(26);
   TText *pt_LaTex = pt->AddText("1.18#times10^{#minus26}");
   pt_LaTex = pt->AddText("#minus0.00313#pm0.000117");
   pt_LaTex = pt->AddText("0.025#pm0.00263");
   pt_LaTex = pt->AddText("    8#pm0.892");
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
   TLine *line = new TLine(-36,0,8,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(8,-0.09380053,8,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   
   TF1 *lineFit21131 = new TF1("lineFit2","pol 1",-36,36, TF1::EAddToList::kNo);
   lineFit21131->SetFillColor(19);
   lineFit21131->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   lineFit21131->SetLineColor(ci);
   lineFit21131->SetLineWidth(2);
   lineFit21131->SetChisquare(2.351947e-26);
   lineFit21131->SetNDF(2);
   lineFit21131->GetXaxis()->SetLabelFont(42);
   lineFit21131->GetXaxis()->SetTitleOffset(1);
   lineFit21131->GetXaxis()->SetTitleFont(42);
   lineFit21131->GetYaxis()->SetLabelFont(42);
   lineFit21131->GetYaxis()->SetTitleFont(42);
   lineFit21131->SetParameter(0,0.025);
   lineFit21131->SetParError(0,0.002625222);
   lineFit21131->SetParLimits(0,0,0);
   lineFit21131->SetParameter(1,-0.003125);
   lineFit21131->SetParError(1,0.0001174035);
   lineFit21131->SetParLimits(1,0,0);
   lineFit21131->Draw("same");
   
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
