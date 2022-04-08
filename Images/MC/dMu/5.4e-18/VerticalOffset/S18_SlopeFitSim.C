void S18_SlopeFitSim()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Apr  7 12:12:08 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->Range(-1.625,8.875e-05,0.625,0.00020125);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx2[2] = {
   0.25,
   -1.25};
   Double_t _fy2[2] = {
   0,
   0};
   TGraph *graph = new TGraph(2,_fx2,_fy2);
   graph->SetName("");
   graph->SetTitle("S18");
   graph->SetFillStyle(1000);
   graph->SetMarkerSize(0);
   
   TH1F *Graph_Graph2 = new TH1F("Graph_Graph2","S18",100,-1.4,0.4);
   Graph_Graph2->SetMinimum(0.0001);
   Graph_Graph2->SetMaximum(0.00019);
   Graph_Graph2->SetDirectory(0);
   Graph_Graph2->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph2->SetLineColor(ci);
   Graph_Graph2->GetXaxis()->SetTitle("Tracker alignment vertical offset [mm]");
   Graph_Graph2->GetXaxis()->CenterTitle(true);
   Graph_Graph2->GetXaxis()->SetLabelFont(42);
   Graph_Graph2->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph2->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph2->GetXaxis()->SetTitleFont(42);
   Graph_Graph2->GetYaxis()->SetTitle("#LT#theta_{y}#GT/p [mrad/MeV]");
   Graph_Graph2->GetYaxis()->CenterTitle(true);
   Graph_Graph2->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph2->GetYaxis()->SetLabelFont(42);
   Graph_Graph2->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph2->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph2->GetYaxis()->SetTitleFont(42);
   Graph_Graph2->GetZaxis()->SetLabelFont(42);
   Graph_Graph2->GetZaxis()->SetTitleOffset(1);
   Graph_Graph2->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph2);
   
   graph->Draw("ap");
   
   Double_t _fx1011[2] = {
   0,
   -1};
   Double_t _fy1011[2] = {
   0.0001507619,
   0.0001310163};
   Double_t _fex1011[2] = {
   0,
   0};
   Double_t _fey1011[2] = {
   1.72665e-05,
   1.700837e-05};
   TGraphErrors *gre = new TGraphErrors(2,_fx1011,_fy1011,_fex1011,_fey1011);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1011 = new TH1F("Graph_Graph1011","",100,-1.1,0);
   Graph_Graph1011->SetMinimum(0.0001086059);
   Graph_Graph1011->SetMaximum(0.0001734304);
   Graph_Graph1011->SetDirectory(0);
   Graph_Graph1011->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1011->SetLineColor(ci);
   Graph_Graph1011->GetXaxis()->SetLabelFont(42);
   Graph_Graph1011->GetXaxis()->SetTitleOffset(1);
   Graph_Graph1011->GetXaxis()->SetTitleFont(42);
   Graph_Graph1011->GetYaxis()->SetLabelFont(42);
   Graph_Graph1011->GetYaxis()->SetTitleFont(42);
   Graph_Graph1011->GetZaxis()->SetLabelFont(42);
   Graph_Graph1011->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1011->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1011);
   
   
   TF1 *fit1012 = new TF1("fit","[0]+[1]*x",-1,0, TF1::EAddToList::kNo);
   fit1012->SetFillColor(19);
   fit1012->SetFillStyle(0);
   fit1012->SetLineColor(2);
   fit1012->SetLineWidth(2);
   fit1012->SetChisquare(9.06898e-17);
   fit1012->SetNDF(0);
   fit1012->GetXaxis()->SetLabelFont(42);
   fit1012->GetXaxis()->SetTitleOffset(1);
   fit1012->GetXaxis()->SetTitleFont(42);
   fit1012->GetYaxis()->SetLabelFont(42);
   fit1012->GetYaxis()->SetTitleFont(42);
   fit1012->SetParameter(0,0.0001507619);
   fit1012->SetParError(0,1.72665e-05);
   fit1012->SetParLimits(0,0,0);
   fit1012->SetParameter(1,1.974551e-05);
   fit1012->SetParError(1,2.423668e-05);
   fit1012->SetParLimits(1,0,0);
   fit1012->SetParent(gre);
   gre->GetListOfFunctions()->Add(fit1012);
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
   pt_LaTex = pt->AddText("0.00015
#pm2e-05
");
   pt_LaTex = pt->AddText("1.97e-05
#pm2.42e-05
");
   pt->Draw();
   
   pt = new TPaveText(0.4579648,0.94,0.5420352,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   pt_LaTex = pt->AddText("S18");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
