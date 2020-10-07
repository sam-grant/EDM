void Result_NSUBRUN_150()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Oct  5 20:04:42 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-45,-0.1226555,45,0.1726555);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1179[4] = {
   -30,
   -10,
   10,
   30};
   Double_t Graph0_fy1179[4] = {
   0.11875,
   0.05625,
   -0.00625,
   -0.06875};
   Double_t Graph0_fex1179[4] = {
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1179[4] = {
   0.004686987,
   0.004686987,
   0.004686987,
   0.004686987};
   TGraphErrors *gre = new TGraphErrors(4,Graph0_fx1179,Graph0_fy1179,Graph0_fex1179,Graph0_fey1179);
   gre->SetName("Graph0");
   gre->SetTitle("Sub-runs 150");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01179 = new TH1F("Graph_Graph01179","Sub-runs 150",100,-36,36);
   Graph_Graph01179->SetMinimum(-0.09312438);
   Graph_Graph01179->SetMaximum(0.1431244);
   Graph_Graph01179->SetDirectory(0);
   Graph_Graph01179->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01179->SetLineColor(ci);
   Graph_Graph01179->GetXaxis()->SetTitle("Applied B_{r} [ppm]");
   Graph_Graph01179->GetXaxis()->CenterTitle(true);
   Graph_Graph01179->GetXaxis()->SetLabelFont(42);
   Graph_Graph01179->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01179->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01179->GetXaxis()->SetTitleFont(42);
   Graph_Graph01179->GetYaxis()->SetTitle("#LTy#GT / QHV [mm/kV]");
   Graph_Graph01179->GetYaxis()->CenterTitle(true);
   Graph_Graph01179->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01179->GetYaxis()->SetLabelFont(42);
   Graph_Graph01179->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01179->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01179->GetYaxis()->SetTitleFont(42);
   Graph_Graph01179->GetZaxis()->SetLabelFont(42);
   Graph_Graph01179->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01179->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01179);
   
   
   TF1 *lineFit21180 = new TF1("lineFit2","pol 1",-36,36, TF1::EAddToList::kNo);
   lineFit21180->SetFillColor(19);
   lineFit21180->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   lineFit21180->SetLineColor(ci);
   lineFit21180->SetLineWidth(2);
   lineFit21180->SetChisquare(1.577222e-26);
   lineFit21180->SetNDF(2);
   lineFit21180->GetXaxis()->SetLabelFont(42);
   lineFit21180->GetXaxis()->SetTitleOffset(1);
   lineFit21180->GetXaxis()->SetTitleFont(42);
   lineFit21180->GetYaxis()->SetLabelFont(42);
   lineFit21180->GetYaxis()->SetTitleFont(42);
   lineFit21180->SetParameter(0,0.025);
   lineFit21180->SetParError(0,0.002343493);
   lineFit21180->SetParLimits(0,0,0);
   lineFit21180->SetParameter(1,-0.003125);
   lineFit21180->SetParError(1,0.0001048042);
   lineFit21180->SetParLimits(1,0,0);
   lineFit21180->SetParent(gre);
   gre->GetListOfFunctions()->Add(lineFit21180);
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.69,0.68,0.89,0.89,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(33);
   pt->SetTextFont(44);
   pt->SetTextSize(26);
   TText *pt_LaTex = pt->AddText("7.89#times10^{#minus27}");
   pt_LaTex = pt->AddText("#minus0.00312#pm0.000105");
   pt_LaTex = pt->AddText("0.025#pm0.00234");
   pt_LaTex = pt->AddText("    8#pm0.796");
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
   line = new TLine(8,-0.09312438,8,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   
   TF1 *lineFit21181 = new TF1("lineFit2","pol 1",-36,36, TF1::EAddToList::kNo);
   lineFit21181->SetFillColor(19);
   lineFit21181->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   lineFit21181->SetLineColor(ci);
   lineFit21181->SetLineWidth(2);
   lineFit21181->SetChisquare(1.577222e-26);
   lineFit21181->SetNDF(2);
   lineFit21181->GetXaxis()->SetLabelFont(42);
   lineFit21181->GetXaxis()->SetTitleOffset(1);
   lineFit21181->GetXaxis()->SetTitleFont(42);
   lineFit21181->GetYaxis()->SetLabelFont(42);
   lineFit21181->GetYaxis()->SetTitleFont(42);
   lineFit21181->SetParameter(0,0.025);
   lineFit21181->SetParError(0,0.002343493);
   lineFit21181->SetParLimits(0,0,0);
   lineFit21181->SetParameter(1,-0.003125);
   lineFit21181->SetParError(1,0.0001048042);
   lineFit21181->SetParLimits(1,0,0);
   lineFit21181->Draw("same");
   
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
