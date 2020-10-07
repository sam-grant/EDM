void Result_NSUBRUN_125_NEXP_0()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Oct  7 18:20:59 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-45,-0.1325434,45,0.1809314);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1049[4] = {
   -30,
   -10,
   10,
   30};
   Double_t Graph0_fy1049[4] = {
   0.1239986,
   0.05480727,
   -0.008428108,
   -0.07561066};
   Double_t Graph0_fex1049[4] = {
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1049[4] = {
   0.004686987,
   0.004686987,
   0.004686987,
   0.004686987};
   TGraphErrors *gre = new TGraphErrors(4,Graph0_fx1049,Graph0_fy1049,Graph0_fex1049,Graph0_fey1049);
   gre->SetName("Graph0");
   gre->SetTitle("Sub-runs 125");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01049 = new TH1F("Graph_Graph01049","Sub-runs 125",100,-36,36);
   Graph_Graph01049->SetMinimum(-0.101196);
   Graph_Graph01049->SetMaximum(0.1495839);
   Graph_Graph01049->SetDirectory(0);
   Graph_Graph01049->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01049->SetLineColor(ci);
   Graph_Graph01049->GetXaxis()->SetTitle("Applied B_{r} [ppm]");
   Graph_Graph01049->GetXaxis()->CenterTitle(true);
   Graph_Graph01049->GetXaxis()->SetLabelFont(42);
   Graph_Graph01049->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01049->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01049->GetXaxis()->SetTitleFont(42);
   Graph_Graph01049->GetYaxis()->SetTitle("#LTy#GT / QHV [mm/kV]");
   Graph_Graph01049->GetYaxis()->CenterTitle(true);
   Graph_Graph01049->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01049->GetYaxis()->SetLabelFont(42);
   Graph_Graph01049->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01049->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01049->GetYaxis()->SetTitleFont(42);
   Graph_Graph01049->GetZaxis()->SetLabelFont(42);
   Graph_Graph01049->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01049->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01049);
   
   
   TF1 *fieldLineFit1050 = new TF1("fieldLineFit","pol 1",-36,36, TF1::EAddToList::kNo);
   fieldLineFit1050->SetFillColor(19);
   fieldLineFit1050->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   fieldLineFit1050->SetLineColor(ci);
   fieldLineFit1050->SetLineWidth(2);
   fieldLineFit1050->SetChisquare(0.269138);
   fieldLineFit1050->SetNDF(2);
   fieldLineFit1050->GetXaxis()->SetLabelFont(42);
   fieldLineFit1050->GetXaxis()->SetTitleOffset(1);
   fieldLineFit1050->GetXaxis()->SetTitleFont(42);
   fieldLineFit1050->GetYaxis()->SetLabelFont(42);
   fieldLineFit1050->GetYaxis()->SetTitleFont(42);
   fieldLineFit1050->SetParameter(0,0.02369177);
   fieldLineFit1050->SetParError(0,0.002343493);
   fieldLineFit1050->SetParLimits(0,0,0);
   fieldLineFit1050->SetParameter(1,-0.003310316);
   fieldLineFit1050->SetParError(1,0.0001048042);
   fieldLineFit1050->SetParLimits(1,0,0);
   fieldLineFit1050->SetParent(gre);
   gre->GetListOfFunctions()->Add(fieldLineFit1050);
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.69,0.68,0.89,0.89,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(33);
   pt->SetTextFont(44);
   pt->SetTextSize(26);
   TText *pt_LaTex = pt->AddText("0.135");
   pt_LaTex = pt->AddText("#minus0.00331#pm0.000105");
   pt_LaTex = pt->AddText("0.0237#pm0.00234");
   pt_LaTex = pt->AddText(" 7.16#pm0.743");
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
   TLine *line = new TLine(-36,0,7.156953,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(7.156953,-0.101196,7.156953,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   
   TF1 *fieldLineFit1051 = new TF1("fieldLineFit","pol 1",-36,36, TF1::EAddToList::kNo);
   fieldLineFit1051->SetFillColor(19);
   fieldLineFit1051->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   fieldLineFit1051->SetLineColor(ci);
   fieldLineFit1051->SetLineWidth(2);
   fieldLineFit1051->SetChisquare(0.269138);
   fieldLineFit1051->SetNDF(2);
   fieldLineFit1051->GetXaxis()->SetLabelFont(42);
   fieldLineFit1051->GetXaxis()->SetTitleOffset(1);
   fieldLineFit1051->GetXaxis()->SetTitleFont(42);
   fieldLineFit1051->GetYaxis()->SetLabelFont(42);
   fieldLineFit1051->GetYaxis()->SetTitleFont(42);
   fieldLineFit1051->SetParameter(0,0.02369177);
   fieldLineFit1051->SetParError(0,0.002343493);
   fieldLineFit1051->SetParLimits(0,0,0);
   fieldLineFit1051->SetParameter(1,-0.003310316);
   fieldLineFit1051->SetParError(1,0.0001048042);
   fieldLineFit1051->SetParLimits(1,0,0);
   fieldLineFit1051->Draw("same");
   
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
