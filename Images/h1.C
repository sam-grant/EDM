void h1()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Dec  9 20:56:28 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *h1__1 = new TH1D("h1__1","",100,-1e-18,1e-18);
   h1__1->SetBinContent(27,1);
   h1__1->SetBinContent(34,1);
   h1__1->SetBinContent(35,3);
   h1__1->SetBinContent(36,2);
   h1__1->SetBinContent(37,2);
   h1__1->SetBinContent(38,4);
   h1__1->SetBinContent(39,5);
   h1__1->SetBinContent(40,9);
   h1__1->SetBinContent(41,12);
   h1__1->SetBinContent(42,21);
   h1__1->SetBinContent(43,28);
   h1__1->SetBinContent(44,42);
   h1__1->SetBinContent(45,36);
   h1__1->SetBinContent(46,56);
   h1__1->SetBinContent(47,51);
   h1__1->SetBinContent(48,76);
   h1__1->SetBinContent(49,88);
   h1__1->SetBinContent(50,63);
   h1__1->SetBinContent(51,78);
   h1__1->SetBinContent(52,70);
   h1__1->SetBinContent(53,73);
   h1__1->SetBinContent(54,61);
   h1__1->SetBinContent(55,49);
   h1__1->SetBinContent(56,40);
   h1__1->SetBinContent(57,31);
   h1__1->SetBinContent(58,31);
   h1__1->SetBinContent(59,20);
   h1__1->SetBinContent(60,21);
   h1__1->SetBinContent(61,8);
   h1__1->SetBinContent(62,7);
   h1__1->SetBinContent(63,5);
   h1__1->SetBinContent(64,2);
   h1__1->SetBinContent(65,1);
   h1__1->SetBinContent(66,2);
   h1__1->SetBinContent(70,1);
   h1__1->SetEntries(1000);
   h1__1->GetXaxis()->SetTitle("d_{#mu} [e#upointcm]");
   h1__1->GetXaxis()->CenterTitle(true);
   h1__1->GetXaxis()->SetLabelFont(42);
   h1__1->GetXaxis()->SetTitleSize(0.04);
   h1__1->GetXaxis()->SetTitleOffset(1.1);
   h1__1->GetXaxis()->SetTitleFont(42);
   h1__1->GetYaxis()->SetTitle("Trials");
   h1__1->GetYaxis()->CenterTitle(true);
   h1__1->GetYaxis()->SetNdivisions(4000510);
   h1__1->GetYaxis()->SetLabelFont(42);
   h1__1->GetYaxis()->SetTitleSize(0.04);
   h1__1->GetYaxis()->SetTitleOffset(1.1);
   h1__1->GetYaxis()->SetTitleFont(42);
   h1__1->GetZaxis()->SetLabelFont(42);
   h1__1->GetZaxis()->SetTitleOffset(1);
   h1__1->GetZaxis()->SetTitleFont(42);
   h1__1->Draw("HIST");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
