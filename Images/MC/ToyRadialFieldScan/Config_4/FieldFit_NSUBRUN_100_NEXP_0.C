void FieldFit_NSUBRUN_100_NEXP_0()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Oct 15 00:39:42 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-75,-0.3188443,75,0.2648374);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1101[11] = {
   -50,
   -40,
   -30,
   -20,
   -10,
   0,
   10,
   20,
   30,
   40,
   50};
   Double_t Graph0_fy1101[11] = {
   0.1623339,
   0.1195733,
   0.08366942,
   0.0452112,
   0.01288277,
   -0.02188661,
   -0.06207774,
   -0.1066311,
   -0.1481157,
   -0.1805764,
   -0.2163407};
   Double_t Graph0_fex1101[11] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1101[11] = {
   0.005223287,
   0.005223287,
   0.005223287,
   0.005223287,
   0.005223287,
   0.005223287,
   0.005223287,
   0.005223287,
   0.005223287,
   0.005223287,
   0.005223287};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1101,Graph0_fy1101,Graph0_fex1101,Graph0_fey1101);
   gre->SetName("Graph0");
   gre->SetTitle("Sub-runs 100");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01101 = new TH1F("Graph_Graph01101","Sub-runs 100",100,-60,60);
   Graph_Graph01101->SetMinimum(-0.2604761);
   Graph_Graph01101->SetMaximum(0.2064693);
   Graph_Graph01101->SetDirectory(0);
   Graph_Graph01101->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01101->SetLineColor(ci);
   Graph_Graph01101->GetXaxis()->SetTitle("Applied B_{r} [ppm]");
   Graph_Graph01101->GetXaxis()->CenterTitle(true);
   Graph_Graph01101->GetXaxis()->SetLabelFont(42);
   Graph_Graph01101->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01101->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01101->GetXaxis()->SetTitleFont(42);
   Graph_Graph01101->GetYaxis()->SetTitle("#LTy#GT / QHV [mm/kV]");
   Graph_Graph01101->GetYaxis()->CenterTitle(true);
   Graph_Graph01101->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01101->GetYaxis()->SetLabelFont(42);
   Graph_Graph01101->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01101->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01101->GetYaxis()->SetTitleFont(42);
   Graph_Graph01101->GetZaxis()->SetLabelFont(42);
   Graph_Graph01101->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01101->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01101);
   
   
   TF1 *mainFit1102 = new TF1("mainFit","[0]+[1]*x",-60,60, TF1::EAddToList::kNo);
   mainFit1102->SetFillColor(19);
   mainFit1102->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   mainFit1102->SetLineColor(ci);
   mainFit1102->SetLineWidth(2);
   mainFit1102->SetChisquare(5.082129);
   mainFit1102->SetNDF(9);
   mainFit1102->GetXaxis()->SetLabelFont(42);
   mainFit1102->GetXaxis()->SetTitleOffset(1);
   mainFit1102->GetXaxis()->SetTitleFont(42);
   mainFit1102->GetYaxis()->SetLabelFont(42);
   mainFit1102->GetYaxis()->SetTitleFont(42);
   mainFit1102->SetParameter(0,-0.02835978);
   mainFit1102->SetParError(0,0.00157488);
   mainFit1102->SetParLimits(0,0,0);
   mainFit1102->SetParameter(1,-0.003789065);
   mainFit1102->SetParError(1,4.980209e-05);
   mainFit1102->SetParLimits(1,0,0);
   mainFit1102->SetParent(gre);
   gre->GetListOfFunctions()->Add(mainFit1102);
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.69,0.68,0.89,0.89,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(33);
   pt->SetTextFont(44);
   pt->SetTextSize(26);
   TText *pt_LaTex = pt->AddText("0.565");
   pt_LaTex = pt->AddText("#minus0.00379#pm4.98e-05");
   pt_LaTex = pt->AddText("#minus0.0284#pm0.00157");
   pt_LaTex = pt->AddText("#minus7.48#pm0.427");
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
   TLine *line = new TLine(-60,0,-7.484639,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(-7.484639,-0.2604761,-7.484639,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   
   TF1 *mainFit1103 = new TF1("mainFit","[0]+[1]*x",-60,60, TF1::EAddToList::kNo);
   mainFit1103->SetFillColor(19);
   mainFit1103->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   mainFit1103->SetLineColor(ci);
   mainFit1103->SetLineWidth(2);
   mainFit1103->SetChisquare(5.082129);
   mainFit1103->SetNDF(9);
   mainFit1103->GetXaxis()->SetLabelFont(42);
   mainFit1103->GetXaxis()->SetTitleOffset(1);
   mainFit1103->GetXaxis()->SetTitleFont(42);
   mainFit1103->GetYaxis()->SetLabelFont(42);
   mainFit1103->GetYaxis()->SetTitleFont(42);
   mainFit1103->SetParameter(0,-0.02835978);
   mainFit1103->SetParError(0,0.00157488);
   mainFit1103->SetParLimits(0,0,0);
   mainFit1103->SetParameter(1,-0.003789065);
   mainFit1103->SetParError(1,4.980209e-05);
   mainFit1103->SetParLimits(1,0,0);
   mainFit1103->Draw("same");
   
   pt = new TPaveText(0.3750503,0.94,0.6249497,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   pt_LaTex = pt->AddText("Sub-runs 100");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
