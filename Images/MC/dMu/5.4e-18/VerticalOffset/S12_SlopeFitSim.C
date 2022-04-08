void S12_SlopeFitSim()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr  7 12:12:08 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->Range(-0.625,0.00019,1.625,0.00029);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1[2] = {
   1.25,
   -0.25};
   Double_t _fy1[2] = {
   0,
   0};
   TGraph *graph = new TGraph(2,_fx1,_fy1);
   graph->SetName("");
   graph->SetTitle("S12");
   graph->SetFillStyle(1000);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph1 = new TH1F("Graph_Graph1","S12",100,-0.4,1.4);
   Graph_Graph1->SetMinimum(0.0002);
   Graph_Graph1->SetMaximum(0.00028);
   Graph_Graph1->SetDirectory(0);
   Graph_Graph1->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1->SetLineColor(ci);
   Graph_Graph1->GetXaxis()->SetTitle("Tracker alignment vertical offset [mm]");
   Graph_Graph1->GetXaxis()->CenterTitle(true);
   Graph_Graph1->GetXaxis()->SetLabelFont(42);
   Graph_Graph1->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1->GetXaxis()->SetTitleFont(42);
   Graph_Graph1->GetYaxis()->SetTitle("#LT#theta_{y}#GT/p [mrad/MeV]");
   Graph_Graph1->GetYaxis()->CenterTitle(true);
   Graph_Graph1->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1->GetYaxis()->SetLabelFont(42);
   Graph_Graph1->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph1->GetYaxis()->SetTitleFont(42);
   Graph_Graph1->GetZaxis()->SetLabelFont(42);
   Graph_Graph1->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph1);
   
   graph->Draw("ap");
   
   Double_t _fx1005[2] = {
   0,
   1};
   Double_t _fy1005[2] = {
   0.0002328066,
   0.0002421595};
   Double_t _fex1005[2] = {
   0,
   0};
   Double_t _fey1005[2] = {
   1.683058e-05,
   1.670467e-05};
   TGraphErrors *gre = new TGraphErrors(2,_fx1005,_fy1005,_fex1005,_fey1005);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1005 = new TH1F("Graph_Graph1005","",100,0,1.1);
   Graph_Graph1005->SetMinimum(0.0002116871);
   Graph_Graph1005->SetMaximum(0.000263153);
   Graph_Graph1005->SetDirectory(0);
   Graph_Graph1005->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1005->SetLineColor(ci);
   Graph_Graph1005->GetXaxis()->SetLabelFont(42);
   Graph_Graph1005->GetXaxis()->SetTitleOffset(1);
   Graph_Graph1005->GetXaxis()->SetTitleFont(42);
   Graph_Graph1005->GetYaxis()->SetLabelFont(42);
   Graph_Graph1005->GetYaxis()->SetTitleFont(42);
   Graph_Graph1005->GetZaxis()->SetLabelFont(42);
   Graph_Graph1005->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1005->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1005);
   
   
   TF1 *fit1006 = new TF1("fit","[0]+[1]*x",0,1, TF1::EAddToList::kNo);
   fit1006->SetFillColor(19);
   fit1006->SetFillStyle(0);
   fit1006->SetLineColor(2);
   fit1006->SetLineWidth(2);
   fit1006->SetChisquare(1.304852e-16);
   fit1006->SetNDF(0);
   fit1006->GetXaxis()->SetLabelFont(42);
   fit1006->GetXaxis()->SetTitleOffset(1);
   fit1006->GetXaxis()->SetTitleFont(42);
   fit1006->GetYaxis()->SetLabelFont(42);
   fit1006->GetYaxis()->SetTitleFont(42);
   fit1006->SetParameter(0,0.0002328066);
   fit1006->SetParError(0,1.683058e-05);
   fit1006->SetParLimits(0,0,0);
   fit1006->SetParameter(1,9.352986e-06);
   fit1006->SetParError(1,2.371317e-05);
   fit1006->SetParLimits(1,0,0);
   fit1006->SetParent(gre);
   gre->GetListOfFunctions()->Add(fit1006);
   gre->Draw("p ");
   
   TPaveText *pt = new TPaveText(0.11,0.75,0.65,0.89,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(13);
   pt->SetTextFont(44);
   pt->SetTextSize(26);
   TText *pt_LaTex = pt->AddText("Gradient");
   pt_LaTex = pt->AddText("Y-intercept");
   pt->Draw();
   
   pt = new TPaveText(0.7,0.74,0.75,0.89,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(33);
   pt->SetTextFont(44);
   pt->SetTextSize(26);
   pt_LaTex = pt->AddText("0.00023
#pm2e-05
");
   pt_LaTex = pt->AddText("9.35e-06
#pm2.37e-05
");
   pt->Draw();
   
   pt = new TPaveText(0.4579648,0.94,0.5420352,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   pt_LaTex = pt->AddText("S12");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
