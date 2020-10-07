void Result_NSUBRUN_50()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Oct  5 20:04:42 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-45,-0.1287482,45,0.1787482);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1027[4] = {
   -30,
   -10,
   10,
   30};
   Double_t Graph0_fy1027[4] = {
   0.11875,
   0.05625,
   -0.00625,
   -0.06875};
   Double_t Graph0_fex1027[4] = {
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1027[4] = {
   0.00874882,
   0.00874882,
   0.00874882,
   0.00874882};
   TGraphErrors *gre = new TGraphErrors(4,Graph0_fx1027,Graph0_fy1027,Graph0_fex1027,Graph0_fey1027);
   gre->SetName("Graph0");
   gre->SetTitle("Sub-runs 50");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01027 = new TH1F("Graph_Graph01027","Sub-runs 50",100,-36,36);
   Graph_Graph01027->SetMinimum(-0.09799858);
   Graph_Graph01027->SetMaximum(0.1479986);
   Graph_Graph01027->SetDirectory(0);
   Graph_Graph01027->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01027->SetLineColor(ci);
   Graph_Graph01027->GetXaxis()->SetTitle("Applied B_{r} [ppm]");
   Graph_Graph01027->GetXaxis()->CenterTitle(true);
   Graph_Graph01027->GetXaxis()->SetLabelFont(42);
   Graph_Graph01027->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01027->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01027->GetXaxis()->SetTitleFont(42);
   Graph_Graph01027->GetYaxis()->SetTitle("#LTy#GT / QHV [mm/kV]");
   Graph_Graph01027->GetYaxis()->CenterTitle(true);
   Graph_Graph01027->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01027->GetYaxis()->SetLabelFont(42);
   Graph_Graph01027->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01027->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01027->GetYaxis()->SetTitleFont(42);
   Graph_Graph01027->GetZaxis()->SetLabelFont(42);
   Graph_Graph01027->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01027->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01027);
   
   
   TF1 *lineFit21028 = new TF1("lineFit2","pol 1",-36,36, TF1::EAddToList::kNo);
   lineFit21028->SetFillColor(19);
   lineFit21028->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   lineFit21028->SetLineColor(ci);
   lineFit21028->SetLineWidth(2);
   lineFit21028->SetChisquare(3.263838e-27);
   lineFit21028->SetNDF(2);
   lineFit21028->GetXaxis()->SetLabelFont(42);
   lineFit21028->GetXaxis()->SetTitleOffset(1);
   lineFit21028->GetXaxis()->SetTitleFont(42);
   lineFit21028->GetYaxis()->SetLabelFont(42);
   lineFit21028->GetYaxis()->SetTitleFont(42);
   lineFit21028->SetParameter(0,0.025);
   lineFit21028->SetParError(0,0.00437441);
   lineFit21028->SetParLimits(0,0,0);
   lineFit21028->SetParameter(1,-0.003125);
   lineFit21028->SetParError(1,0.0001956296);
   lineFit21028->SetParLimits(1,0,0);
   lineFit21028->SetParent(gre);
   gre->GetListOfFunctions()->Add(lineFit21028);
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.69,0.68,0.89,0.89,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(33);
   pt->SetTextFont(44);
   pt->SetTextSize(26);
   TText *pt_LaTex = pt->AddText("1.63#times10^{#minus27}");
   pt_LaTex = pt->AddText("#minus0.00313#pm0.000196");
   pt_LaTex = pt->AddText("0.025#pm0.00437");
   pt_LaTex = pt->AddText("    8#pm 1.49");
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
   line = new TLine(8,-0.09799858,8,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   
   TF1 *lineFit21029 = new TF1("lineFit2","pol 1",-36,36, TF1::EAddToList::kNo);
   lineFit21029->SetFillColor(19);
   lineFit21029->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   lineFit21029->SetLineColor(ci);
   lineFit21029->SetLineWidth(2);
   lineFit21029->SetChisquare(3.263838e-27);
   lineFit21029->SetNDF(2);
   lineFit21029->GetXaxis()->SetLabelFont(42);
   lineFit21029->GetXaxis()->SetTitleOffset(1);
   lineFit21029->GetXaxis()->SetTitleFont(42);
   lineFit21029->GetYaxis()->SetLabelFont(42);
   lineFit21029->GetYaxis()->SetTitleFont(42);
   lineFit21029->SetParameter(0,0.025);
   lineFit21029->SetParError(0,0.00437441);
   lineFit21029->SetParLimits(0,0,0);
   lineFit21029->SetParameter(1,-0.003125);
   lineFit21029->SetParError(1,0.0001956296);
   lineFit21029->SetParLimits(1,0,0);
   lineFit21029->Draw("same");
   
   pt = new TPaveText(0.3851005,0.94,0.6148995,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   pt_LaTex = pt->AddText("Sub-runs 50");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
