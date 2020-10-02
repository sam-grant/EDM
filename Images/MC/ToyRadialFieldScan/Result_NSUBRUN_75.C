void Result_NSUBRUN_75()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Oct  2 13:49:33 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-45,-0.1256809,45,0.1756809);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1053[4] = {
   -30,
   -10,
   10,
   30};
   Double_t Graph0_fy1053[4] = {
   0.11875,
   0.05625,
   -0.00625,
   -0.06875};
   Double_t Graph0_fex1053[4] = {
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1053[4] = {
   0.006703947,
   0.006703947,
   0.006703947,
   0.006703947};
   TGraphErrors *gre = new TGraphErrors(4,Graph0_fx1053,Graph0_fy1053,Graph0_fex1053,Graph0_fey1053);
   gre->SetName("Graph0");
   gre->SetTitle("Sub-runs 75");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01053 = new TH1F("Graph_Graph01053","Sub-runs 75",100,-36,36);
   Graph_Graph01053->SetMinimum(-0.09554474);
   Graph_Graph01053->SetMaximum(0.1455447);
   Graph_Graph01053->SetDirectory(0);
   Graph_Graph01053->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01053->SetLineColor(ci);
   Graph_Graph01053->GetXaxis()->SetTitle("Applied B_{r} [ppm]");
   Graph_Graph01053->GetXaxis()->CenterTitle(true);
   Graph_Graph01053->GetXaxis()->SetLabelFont(42);
   Graph_Graph01053->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01053->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01053->GetXaxis()->SetTitleFont(42);
   Graph_Graph01053->GetYaxis()->SetTitle("#LTy#GT / QHV [mm/kV]");
   Graph_Graph01053->GetYaxis()->CenterTitle(true);
   Graph_Graph01053->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01053->GetYaxis()->SetLabelFont(42);
   Graph_Graph01053->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01053->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01053->GetYaxis()->SetTitleFont(42);
   Graph_Graph01053->GetZaxis()->SetLabelFont(42);
   Graph_Graph01053->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01053->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01053);
   
   
   TF1 *lineFit21054 = new TF1("lineFit2","pol 1",-36,36, TF1::EAddToList::kNo);
   lineFit21054->SetFillColor(19);
   lineFit21054->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   lineFit21054->SetLineColor(ci);
   lineFit21054->SetLineWidth(2);
   lineFit21054->SetChisquare(1.967321e-26);
   lineFit21054->SetNDF(2);
   lineFit21054->GetXaxis()->SetLabelFont(42);
   lineFit21054->GetXaxis()->SetTitleOffset(1);
   lineFit21054->GetXaxis()->SetTitleFont(42);
   lineFit21054->GetYaxis()->SetLabelFont(42);
   lineFit21054->GetYaxis()->SetTitleFont(42);
   lineFit21054->SetParameter(0,0.025);
   lineFit21054->SetParError(0,0.003351974);
   lineFit21054->SetParLimits(0,0,0);
   lineFit21054->SetParameter(1,-0.003125);
   lineFit21054->SetParError(1,0.0001499048);
   lineFit21054->SetParLimits(1,0,0);
   lineFit21054->SetParent(gre);
   gre->GetListOfFunctions()->Add(lineFit21054);
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.69,0.68,0.89,0.89,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(33);
   pt->SetTextFont(44);
   pt->SetTextSize(26);
   TText *pt_LaTex = pt->AddText("9.84#times10^{#minus27}");
   pt_LaTex = pt->AddText("#minus0.00313#pm0.00015");
   pt_LaTex = pt->AddText("0.025#pm0.00335");
   pt_LaTex = pt->AddText("    8#pm 1.14");
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
   line = new TLine(8,-0.09554474,8,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   
   TF1 *lineFit21055 = new TF1("lineFit2","pol 1",-36,36, TF1::EAddToList::kNo);
   lineFit21055->SetFillColor(19);
   lineFit21055->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   lineFit21055->SetLineColor(ci);
   lineFit21055->SetLineWidth(2);
   lineFit21055->SetChisquare(1.967321e-26);
   lineFit21055->SetNDF(2);
   lineFit21055->GetXaxis()->SetLabelFont(42);
   lineFit21055->GetXaxis()->SetTitleOffset(1);
   lineFit21055->GetXaxis()->SetTitleFont(42);
   lineFit21055->GetYaxis()->SetLabelFont(42);
   lineFit21055->GetYaxis()->SetTitleFont(42);
   lineFit21055->SetParameter(0,0.025);
   lineFit21055->SetParError(0,0.003351974);
   lineFit21055->SetParLimits(0,0,0);
   lineFit21055->SetParameter(1,-0.003125);
   lineFit21055->SetParError(1,0.0001499048);
   lineFit21055->SetParLimits(1,0,0);
   lineFit21055->Draw("same");
   
   pt = new TPaveText(0.3851005,0.94,0.6148995,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   pt_LaTex = pt->AddText("Sub-runs 75");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
