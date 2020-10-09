void Result_NSUBRUN_75_NEXP_0()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Oct  9 18:18:38 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-45,-0.212773,45,0.1561723);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1029[4] = {
   -30,
   -10,
   10,
   30};
   Double_t Graph0_fy1029[4] = {
   0.08868467,
   0.001421851,
   -0.06532786,
   -0.1452854};
   Double_t Graph0_fex1029[4] = {
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1029[4] = {
   0.005996719,
   0.005996719,
   0.005996719,
   0.00599672};
   TGraphErrors *gre = new TGraphErrors(4,Graph0_fx1029,Graph0_fy1029,Graph0_fex1029,Graph0_fey1029);
   gre->SetName("Graph0");
   gre->SetTitle("Sub-runs 75");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01029 = new TH1F("Graph_Graph01029","Sub-runs 75",100,-36,36);
   Graph_Graph01029->SetMinimum(-0.1758784);
   Graph_Graph01029->SetMaximum(0.1192777);
   Graph_Graph01029->SetDirectory(0);
   Graph_Graph01029->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01029->SetLineColor(ci);
   Graph_Graph01029->GetXaxis()->SetTitle("Applied B_{r} [ppm]");
   Graph_Graph01029->GetXaxis()->CenterTitle(true);
   Graph_Graph01029->GetXaxis()->SetLabelFont(42);
   Graph_Graph01029->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01029->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01029->GetXaxis()->SetTitleFont(42);
   Graph_Graph01029->GetYaxis()->SetTitle("#LTy#GT / QHV [mm/kV]");
   Graph_Graph01029->GetYaxis()->CenterTitle(true);
   Graph_Graph01029->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01029->GetYaxis()->SetLabelFont(42);
   Graph_Graph01029->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01029->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01029->GetYaxis()->SetTitleFont(42);
   Graph_Graph01029->GetZaxis()->SetLabelFont(42);
   Graph_Graph01029->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01029->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01029);
   
   
   TF1 *fieldLineFit1030 = new TF1("fieldLineFit","pol 1",-36,36, TF1::EAddToList::kNo);
   fieldLineFit1030->SetFillColor(19);
   fieldLineFit1030->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   fieldLineFit1030->SetLineColor(ci);
   fieldLineFit1030->SetLineWidth(2);
   fieldLineFit1030->SetChisquare(1.952046);
   fieldLineFit1030->SetNDF(2);
   fieldLineFit1030->GetXaxis()->SetLabelFont(42);
   fieldLineFit1030->GetXaxis()->SetTitleOffset(1);
   fieldLineFit1030->GetXaxis()->SetTitleFont(42);
   fieldLineFit1030->GetYaxis()->SetLabelFont(42);
   fieldLineFit1030->GetYaxis()->SetTitleFont(42);
   fieldLineFit1030->SetParameter(0,-0.03012668);
   fieldLineFit1030->SetParError(0,0.00299836);
   fieldLineFit1030->SetParLimits(0,0,0);
   fieldLineFit1030->SetParameter(1,-0.003843299);
   fieldLineFit1030->SetParError(1,0.0001340907);
   fieldLineFit1030->SetParLimits(1,0,0);
   fieldLineFit1030->SetParent(gre);
   gre->GetListOfFunctions()->Add(fieldLineFit1030);
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.69,0.68,0.89,0.89,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(33);
   pt->SetTextFont(44);
   pt->SetTextSize(26);
   TText *pt_LaTex = pt->AddText("0.976");
   pt_LaTex = pt->AddText("#minus0.00384#pm0.000134");
   pt_LaTex = pt->AddText("-0.0301#pm0.003");
   pt_LaTex = pt->AddText("-7.84#pm 0.78");
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
   TLine *line = new TLine(-36,0,-7.838755,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(-7.838755,-0.1758784,-7.838755,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   
   TF1 *fieldLineFit1031 = new TF1("fieldLineFit","pol 1",-36,36, TF1::EAddToList::kNo);
   fieldLineFit1031->SetFillColor(19);
   fieldLineFit1031->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   fieldLineFit1031->SetLineColor(ci);
   fieldLineFit1031->SetLineWidth(2);
   fieldLineFit1031->SetChisquare(1.952046);
   fieldLineFit1031->SetNDF(2);
   fieldLineFit1031->GetXaxis()->SetLabelFont(42);
   fieldLineFit1031->GetXaxis()->SetTitleOffset(1);
   fieldLineFit1031->GetXaxis()->SetTitleFont(42);
   fieldLineFit1031->GetYaxis()->SetLabelFont(42);
   fieldLineFit1031->GetYaxis()->SetTitleFont(42);
   fieldLineFit1031->SetParameter(0,-0.03012668);
   fieldLineFit1031->SetParError(0,0.00299836);
   fieldLineFit1031->SetParLimits(0,0,0);
   fieldLineFit1031->SetParameter(1,-0.003843299);
   fieldLineFit1031->SetParError(1,0.0001340907);
   fieldLineFit1031->SetParLimits(1,0,0);
   fieldLineFit1031->Draw("same");
   
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
